#include "Surface.h"

using namespace Eigen;



//Edge
Edge::Edge(Vector3f A, Vector3f B)
{
    p1=A;
    p2=B;
    lenght=getLenght();
}

float Edge::getLenght(){
    float dx = p2[0]-p1[0];
    float dy = p2[1]-p1[1];
    float dz = p2[2]-p1[2];

    float distance2 = dx*dx +dy*dy +dz*dz;
    float distance  = sqrt(distance2);

    return distance;
}

Vector3f Edge::getP1()
{
    return p1;
}

Vector3f Edge::getP2()
{
    return p2;
}

bool Edge::equal(Edge E){
    if ((p1==E.getP1() && p2==E.getP2()) || (p1==E.getP2() && p2==E.getP1()) )
        return true;
    else
        return false;
}

Surface::Surface()
{

}

Surface::~Surface()
{
    glDeleteVertexArrays(1, &mVAO);
    glDeleteBuffers(4, mBufs);
}

void Surface::init(const Shader *shader)
{


    glGenVertexArrays(1, &mVAO);
    glGenBuffers(3, mBufs);

    glBindVertexArray(mVAO);

    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, mBufs[0]);
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(int) * mIndices.size(), mIndices.data(),  GL_STATIC_DRAW);

    int vertex_loc = shader->getAttribLocation("vtx_position");
    if(vertex_loc>=0){
    glEnableVertexAttribArray(vertex_loc);
    glBindBuffer(GL_ARRAY_BUFFER, mBufs[1]);
    glBufferData(GL_ARRAY_BUFFER, sizeof(Vector3f) * mVertices.size(), mVertices.data(), GL_STATIC_DRAW);
    glVertexAttribPointer(vertex_loc, 3, GL_FLOAT, GL_FALSE, 0, 0);
    }

    int color_loc = shader->getAttribLocation("vtx_color");
    if(color_loc>=0){
        glEnableVertexAttribArray(color_loc);
        glBindBuffer(GL_ARRAY_BUFFER, mBufs[2]);
        glBufferData(GL_ARRAY_BUFFER, sizeof(Vector3f) * mColors.size(), mColors.data(), GL_STATIC_DRAW);
        glVertexAttribPointer(color_loc, 3, GL_FLOAT, GL_FALSE, 0, 0);
    }

    int normal_loc = shader->getAttribLocation("vtx_normal");
    if(normal_loc>=0){
        glEnableVertexAttribArray(normal_loc);
        glBindBuffer(GL_ARRAY_BUFFER, mBufs[3]);
        glBufferData(GL_ARRAY_BUFFER, sizeof(Vector3f) * mNormals.size(), mNormals.data(), GL_STATIC_DRAW);
        glVertexAttribPointer(normal_loc, 3, GL_FLOAT, GL_FALSE, 0, 0);
    }


    glBindVertexArray(0);

    if (mIndices.size()>0)
        mReady = true;


}

void Surface::setPos(Vector3f pos1)
{

    mVertices.push_back(pos1);
    mIndices.push_back(mIndices.size());


}

void Surface::setData(Vector3f pos1)
{

}



void Surface::draw() const
{
      /*if (!mReady) {
          std::cerr<<"Warning: Sphere not ready for rendering" << std::endl;
          return;
      }*/

      if(mReady)
      {
      glBindVertexArray(mVAO);

      glDrawElements(GL_TRIANGLES, mIndices.size(),  GL_UNSIGNED_INT, 0);

      glBindVertexArray(0);
      }
 }

