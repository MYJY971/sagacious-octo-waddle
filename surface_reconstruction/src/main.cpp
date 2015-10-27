#include <stdio.h>
#include <stdlib.h>
#include <iostream>

#include "OpenGL.h"
#include <GLFW/glfw3.h>
#include <SOIL2.h>

#include "common.h"
#include <eigen3/Eigen/Geometry>

using namespace Eigen;

#include "Shader.h"
#include "Trackball.h"
#include "Mesh.h"
#include "Pointcloud.h"
#include "Octree.h"
#include "WireCube.h"
#include "Ball.h"
#include "Surface.h"

// initial window size
int WIDTH = 640;
int HEIGHT = 480;

// the default shader program
Shader mBlinn, mSimple;

// geometrical represnetation of a pointlight
Vector3f mLightPos(1,1,1);

// Camera parameters
Trackball mCamera;

// Mouse parameters
Vector2f mLastMousePos;
int mButton = -1;

//Point Cloud Object
PointCloud* pc;

//Octree Debug
Octree* octree;
WireCube* wirecube;

//Ball Pivoting
Ball* ball;
Surface* surface;


int octreeVisu = 0;


float tx=0;
float ty=0;
float tz=0;

float rx=0;
///////////////////////////////

Eigen::Affine3f create_rotation_matrix(float ax, float ay, float az) {
  Eigen::Affine3f rx =
      Eigen::Affine3f(Eigen::AngleAxisf(ax, Eigen::Vector3f(1, 0, 0)));
  Eigen::Affine3f ry =
      Eigen::Affine3f(Eigen::AngleAxisf(ay, Eigen::Vector3f(0, 1, 0)));
  Eigen::Affine3f rz =
      Eigen::Affine3f(Eigen::AngleAxisf(az, Eigen::Vector3f(0, 0, 1)));
  return rz * ry * rx;
}

//////////////////////////////

/** This method needs to be called once the GL context has been created by GLFW.
  * It is called only once per execution */
void initGL()
{ 
    // set the background color, i.e., the color used
    // to fill the screen when calling glClear(GL_COLOR_BUFFER_BIT)
    glClearColor(0.3f,0.3f,0.3f,0.);

    glEnable(GL_DEPTH_TEST);

    // load the default shaders 
    mBlinn.loadFromFiles(PGHP_DIR"/shaders/blinn.vert", PGHP_DIR"/shaders/blinn.frag");
    mSimple.loadFromFiles(PGHP_DIR"/shaders/simple.vert", PGHP_DIR"/shaders/simple.frag");

    //PointCloud
    pc = new PointCloud();
    //pc->load(PGHP_DIR"/data/decimate.asc");
    //pc->load(PGHP_DIR"/data/decimateRed.asc");
    pc->load(PGHP_DIR"/data/sunglasses_lens.asc");
    pc->makeUnitary();
    pc->init(&mBlinn);

    //Ball
    ball = new Ball(pc);
    ball->init(&mBlinn);

    surface = new Surface();
    surface->init(&mSimple);

    //Octree
    octree = new Octree(pc,15,10);
    wirecube = new WireCube();
    wirecube->init(&mSimple);

    mCamera.setSceneCenter(Vector3f(0.0,0.0,0.0));
    mCamera.setSceneDistance(4);
    mCamera.setMinNear(0.1f);
    mCamera.setNearFarOffsets(-200.f,200.0f);
    mCamera.setScreenViewport(AlignedBox2f(Vector2f(0.0,0.0), Vector2f(WIDTH,HEIGHT)));

    GL_TEST_ERR;
}

/** This method is called in the main rendering loop everytime the OpenGL windows has to be refreshed. */
void render(GLFWwindow* window)
{
    // clear the buffer
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // clear all buffers

    //Draw PointCloud
    mBlinn.activate();

    glUniformMatrix4fv(mBlinn.getUniformLocation("projection_matrix"),1,false,mCamera.computeProjectionMatrix().data());
    glUniformMatrix4fv(mBlinn.getUniformLocation("modelview_matrix"),1,false,mCamera.computeViewMatrix().data());
    Vector4f light_pos;
    light_pos << mLightPos , 1.0f;
    glUniform4fv(mBlinn.getUniformLocation("light_pos"),1,light_pos.data());

    glUniformMatrix4fv(mBlinn.getUniformLocation("object_matrix"),1,false,pc->getTransformationMatrix().data());
    Matrix3f normal_matrix = (mCamera.computeViewMatrix()*pc->getTransformationMatrix()).linear().inverse().transpose();
    glUniformMatrix3fv(mBlinn.getUniformLocation("normal_matrix"),1,false,normal_matrix.data());

    pc->draw(&mBlinn);



    //Draw Octree
//    mSimple.activate();
    //mCamera.updateViewMatrix();

//     glUniformMatrix4fv(mSimple.getUniformLocation("projection_matrix"),1,false,mCamera.computeProjectionMatrix().data());
//     glUniformMatrix4fv(mSimple.getUniformLocation("modelview_matrix"),1,false,mCamera.computeViewMatrix().data());
     glUniformMatrix4fv(mBlinn.getUniformLocation("object_matrix"),1,false, ball->getTransformationMatrix().data());
     glUniform3f(mBlinn.getUniformLocation("colorV"),1.f,1.f,1.f);
        ball->draw();
     glUniform3f(mBlinn.getUniformLocation("colorV"),0.2,0.3,0.8);

     mSimple.activate();


       glUniformMatrix4fv(mSimple.getUniformLocation("projection_matrix"),1,false,mCamera.computeProjectionMatrix().data());
       glUniformMatrix4fv(mSimple.getUniformLocation("modelview_matrix"),1,false,mCamera.computeViewMatrix().data());
       glUniformMatrix4fv(mSimple.getUniformLocation("object_matrix"),1,false, surface->getTransformationMatrix().data());
        glUniform3f(mSimple.getUniformLocation("color"),1.,0.,0.);
       surface->draw();
       // glUniform3f(mBlinn.getUniformLocation("colorV"),0.2,0.3,0.8);


    if(octreeVisu >= 0)
    {
        //mSimple.activate();
//        glUniformMatrix4fv(mSimple.getUniformLocation("projection_matrix"),1,false,mCamera.computeProjectionMatrix().data());
//        glUniformMatrix4fv(mSimple.getUniformLocation("modelview_matrix"),1,false,mCamera.computeViewMatrix().data());
        std::vector<AlignedBox3f> aabbs = octree->getAABBs(octreeVisu);
        for(unsigned i=0; i<aabbs.size(); ++i)
        {
            Affine3f object_matrix;
            object_matrix = Translation3f(aabbs[i].center()) * Scaling((aabbs[i].max() - aabbs[i].min())/2.0);
            glUniformMatrix4fv(mSimple.getUniformLocation("object_matrix"),1,false, object_matrix.data());
            wirecube->draw(&mSimple);
        }
    }




    //draw faces

//     glUniformMatrix4fv(mSimple.getUniformLocation("projection_matrix"),1,false,mCamera.computeProjectionMatrix().data());
//     glUniformMatrix4fv(mSimple.getUniformLocation("modelview_matrix"),1,false,mCamera.computeViewMatrix().data());
//     glUniformMatrix4fv(mSimple.getUniformLocation("object_matrix"),1,false, surface->getTransformationMatrix().data());
//     glUniform3f(mSimple.getUniformLocation("color"),1.f,0.f,0.f);
//     surface->draw();
//     glUniform3f(mSimple.getUniformLocation("color"),1.f,1.f,1.f);


    // check OpenGL errors
    GL_TEST_ERR;

    glfwSwapBuffers(window);
}

/** This method is automatically called by GLFW everytime a mouse button is pressed */
void mouse_button_callback(GLFWwindow* window, int button, int action, int mods) 
{
    if(action == GLFW_PRESS) {
        if(button == GLFW_MOUSE_BUTTON_LEFT)
        {
            mCamera.startRotation(mLastMousePos);
        }
        else if(button == GLFW_MOUSE_BUTTON_MIDDLE)
        {
            mCamera.startTranslation(mLastMousePos);
        }
        mButton = button;       
    }else if(action == GLFW_RELEASE) {
        if(mButton == GLFW_MOUSE_BUTTON_LEFT)
        {
            mCamera.endRotation();
        }
        else if(mButton == GLFW_MOUSE_BUTTON_MIDDLE)
        {
            mCamera.endTranslation();
        }
        mButton = -1;
    }
}

/** This method is automatically called by GLFW everytime the scrollwheel is used */
static void scroll_callback(GLFWwindow* window, double x, double y)
{
    mCamera.zoom((y>0)? 1.1: 1./1.1);
}

/** This method is automatically called by GLFW everytime the mouse moves */
static void cursorPos_callback(GLFWwindow* window, double x, double y)
{
    if(mButton == GLFW_MOUSE_BUTTON_LEFT) 
    {
        mCamera.dragRotate(Vector2f(x,y));
    }
    else if(mButton == GLFW_MOUSE_BUTTON_MIDDLE) 
    {
        mCamera.dragTranslate(Vector2f(x,y));
    }
    mLastMousePos = Vector2f(x,y);
}

/** This method is automatically called by GLFW everytime a key is pressed */
static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods)
{
    if(action == GLFW_PRESS) {
        if (key == GLFW_KEY_ESCAPE || key == GLFW_KEY_Q)
            glfwSetWindowShouldClose(window, GL_TRUE);
        else if(key == GLFW_KEY_R)
            mBlinn.loadFromFiles(PGHP_DIR"/shaders/blinn.vert", PGHP_DIR"/shaders/blinn.frag");
        /*else if(key == GLFW_KEY_RIGHT)
        {

            if(octreeVisu < 10)
                octreeVisu++;


        }
        else if(key == GLFW_KEY_LEFT)
        {
            if(octreeVisu > -1)
                octreeVisu--;


        }*/
        else if(key == GLFW_KEY_D)
        {
            octree->decimateOneDepth();

            pc = new PointCloud(octree->getPositions(), octree->getNormals());
            pc->init(&mBlinn);
        }
        else if(key == GLFW_KEY_F)
        {
            std::cout << "starting number of points " << pc->numPoints() << std::endl;

            octree->decimate(pc->numPoints()/10.0f);
            pc = new PointCloud(octree->getPositions(), octree->getNormals());
            pc->init(&mBlinn);

            std::cout << "ending number of points " << pc->numPoints() << std::endl;
        }
        else if(key == GLFW_KEY_C)
        {
            //test
            Affine3f transform(Translation3f(Vector3f(0.5,0,0)));

            rx+=M_PI;

            Affine3f t(Translation3f(0.1,0.0,0));

            Affine3f r=create_rotation_matrix(0.0,0.0,rx);

            ball->setTransformationMatrix(transform*r*t,surface);


        }
        else if(key == GLFW_KEY_X)
        {

            //test
            ball->buildSurface(surface);
            surface->init(&mSimple);

        }



    }

    if(action == GLFW_REPEAT) {
        if(key == GLFW_KEY_RIGHT)
        {
            tx+=0.01f;
            Affine3f transform(Translation3f(tx,ty,tz));
            ball->setTransformationMatrix(transform,surface);
            surface->init(&mSimple);

        }
        else if(key == GLFW_KEY_LEFT)
        {
            tx-=0.01f;
            Affine3f transform(Translation3f(tx,ty,tz));
            ball->setTransformationMatrix(transform,surface);
            surface->init(&mSimple);

        }
        else if(key == GLFW_KEY_UP)
        {
            ty+=0.01f;
            Affine3f transform(Translation3f(tx,ty,tz));
            ball->setTransformationMatrix(transform,surface);
            surface->init(&mSimple);

        }
        else if(key == GLFW_KEY_DOWN)
        {
            ty-=0.01f;
            Affine3f transform(Translation3f(tx,ty,tz));
            ball->setTransformationMatrix(transform,surface);
            surface->init(&mSimple);

        }
        else if(key == GLFW_KEY_W)//Z on Azerty
        {
            tz+=0.01f;
            Affine3f transform(Translation3f(tx,ty,tz));
            ball->setTransformationMatrix(transform,surface);
            surface->init(&mSimple);
        }
        else if(key == GLFW_KEY_S)
        {
            tz-=0.01f;
            Affine3f transform(Translation3f(tx,ty,tz));
            ball->setTransformationMatrix(transform,surface);
            surface->init(&mSimple);

        }
    }

}

/** This method is automatically called by GLFW everytime the OpenGL windows is resized.
      * \param width the new width of the windows (in pixels)
      * \param height the new height of the windows (in pixels)
      */
static void reshape_callback(GLFWwindow* window, int width, int height)
{
    // configure the rendering target size (viewport)
    WIDTH = width;
    HEIGHT = height;
    glViewport(0, 0, width, height);
    mCamera.setScreenViewport(AlignedBox2f(Vector2f(0.0,0.0), Vector2f(width,height)));
    render(window);
}

/** This method is automatically called by GLFW when an error occurs */
static void error_callback(int error, const char* description)
{
    fputs(description, stderr);
}

/** This method uses GLFW to create a window and the OpenGL context */
GLFWwindow* initGLFW()
{
    glfwSetErrorCallback(error_callback);

    if (!glfwInit())
        exit(EXIT_FAILURE);

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    
    GLFWwindow* window = glfwCreateWindow(WIDTH, HEIGHT, "Modelisation Geométrique", NULL, NULL);

    if (!window)
    {
        glfwTerminate();
        exit(EXIT_FAILURE);
    }

    glfwMakeContextCurrent(window);
    gladLoadGLLoader((GLADloadproc) glfwGetProcAddress);

    // Print some useful information about the OpengGL version in use
    std::cout << "OpenGL version: " << glGetString(GL_VERSION) << std::endl;
    std::cout << "GLSL version: " << glGetString(GL_SHADING_LANGUAGE_VERSION) << std::endl;

    glfwSetKeyCallback(window, key_callback);
    glfwSetFramebufferSizeCallback(window, reshape_callback);
    glfwSetCursorPosCallback(window, cursorPos_callback);
    glfwSetMouseButtonCallback(window, mouse_button_callback);
    glfwSetScrollCallback(window, scroll_callback);

    return window;
}

int main(int argc, char *argv[])
{
	GLFWwindow* window = initGLFW();

    initGL();

    while (!glfwWindowShouldClose(window))
    {
        render(window);

        glfwPollEvents();
    }

    glfwDestroyWindow(window);

    glfwTerminate();
    exit(EXIT_SUCCESS);
}
