#include "Ball.h"

using namespace Eigen;

Ball::Ball(const PointCloud * const pc, float radius, int nU, int nV) :
    mRadius(radius)
{
    int nVertices  = (nU + 1) * (nV + 1);
    int nTriangles =  nU * nV * 2;

    mVertices.resize(nVertices);
    mNormals.resize(nVertices);
    mTangents.resize(nVertices);
    mTexCoords.resize(nVertices);
    mColors.resize(nVertices);
    mIndices.resize(3*nTriangles);

    mPositions = pc->getPositions();

    for(int v=0;v<=nV;++v)
    {
        for(int u=0;u<=nU;++u)
        {

            float theta = u / float(nU) * M_PI;
            float phi 	= v / float(nV) * M_PI * 2;

            int index 	= u +(nU+1)*v;

            Vector3f vertex, tangent, normal;
            Vector2f texCoord;

            // normal
            normal[0] = sin(theta) * cos(phi);
            normal[1] = sin(theta) * sin(phi);
            normal[2] = cos(theta);
            normal = normal.normalized();

            // position
            vertex = normal * mRadius;

            // tangent
            theta += M_PI_2;
            tangent[0] = sin(theta) * cos(phi);
            tangent[1] = sin(theta) * sin(phi);
            tangent[2] = cos(theta);
            tangent = tangent.normalized();

            // texture coordinates
            texCoord[1] = u / float(nU);
            texCoord[0] = v / float(nV);

            mVertices[index] = vertex;
            mNormals[index] = normal;
            mTangents[index] = tangent;
            mTexCoords [index] = texCoord;
            mColors[index] = Vector3f(0.6f,0.2f,0.8f);
        }
    }

    int index = 0;
    for(int v=0;v<nV;++v)
    {
        for(int u=0;u<nU;++u)
        {
            int vindex 	= u + (nU+1)*v;

            mIndices[index+0] = vindex;
            mIndices[index+1] = vindex+1 ;
            mIndices[index+2] = vindex+1 + (nU+1);

            mIndices[index+3] = vindex;
            mIndices[index+4] = vindex+1 + (nU+1);
            mIndices[index+5] = vindex   + (nU+1);

            index += 6;
        }
    }

    mCenter=Vector3f(.0,.0,.0);
}


Ball::~Ball()
{
    glDeleteVertexArrays(1, &_vao);
    glDeleteBuffers(6, _bufs);
}

void Ball::init(Shader *shader)
{

    currentShader = shader;
    glGenVertexArrays(1, &_vao);
    glGenBuffers(6, _bufs);

    glBindVertexArray(_vao);

    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, _bufs[0]);
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(int) * mIndices.size(), mIndices.data(),  GL_STATIC_DRAW);

    int vertex_loc = shader->getAttribLocation("vtx_position");
    glEnableVertexAttribArray(vertex_loc);
    glBindBuffer(GL_ARRAY_BUFFER, _bufs[1]);
    glBufferData(GL_ARRAY_BUFFER, sizeof(Vector3f) * mVertices.size(), mVertices.data(), GL_STATIC_DRAW);
    glVertexAttribPointer(vertex_loc, 3, GL_FLOAT, GL_FALSE, 0, 0);

    int color_loc = shader->getAttribLocation("vtx_color");
    if(color_loc>=0){
        glEnableVertexAttribArray(color_loc);
        glBindBuffer(GL_ARRAY_BUFFER, _bufs[2]);
        glBufferData(GL_ARRAY_BUFFER, sizeof(Vector3f) * mColors.size(), mColors.data(), GL_STATIC_DRAW);
        glVertexAttribPointer(color_loc, 3, GL_FLOAT, GL_FALSE, 0, 0);
    }

    int normal_loc = shader->getAttribLocation("vtx_normal");
    if(normal_loc>=0){
        glEnableVertexAttribArray(normal_loc);
        glBindBuffer(GL_ARRAY_BUFFER, _bufs[3]);
        glBufferData(GL_ARRAY_BUFFER, sizeof(Vector3f) * mNormals.size(), mNormals.data(), GL_STATIC_DRAW);
        glVertexAttribPointer(normal_loc, 3, GL_FLOAT, GL_FALSE, 0, 0);
    }

    int tangent_loc = shader->getAttribLocation("vtx_tangent");
    if(tangent_loc>=0){
        glEnableVertexAttribArray(tangent_loc);
        glBindBuffer(GL_ARRAY_BUFFER, _bufs[4]);
        glBufferData(GL_ARRAY_BUFFER, sizeof(Vector3f) * mTangents.size(), mTangents.data(), GL_STATIC_DRAW);
        glVertexAttribPointer(tangent_loc, 3, GL_FLOAT, GL_FALSE, 0, 0);
    }

    int texCoord_loc = shader->getAttribLocation("vtx_texCoord");
    if(texCoord_loc>=0){
        glEnableVertexAttribArray(texCoord_loc);
        glBindBuffer(GL_ARRAY_BUFFER, _bufs[5]);
        glBufferData(GL_ARRAY_BUFFER, sizeof(Vector2f) * mTexCoords.size(), mTexCoords.data(), GL_STATIC_DRAW);
        glVertexAttribPointer(texCoord_loc, 2, GL_FLOAT, GL_FALSE, 0, 0);
    }
    glBindVertexArray(0);

    mReady = true;
}

void Ball::setTransformationMatrix(const Eigen::Matrix4f& transfo, Surface *surface)
{
    mTransformation = transfo;
    Vector4f tmp = this->getTransformationMatrix()*Vector4f(0,0,0,1);
    mCenter=Vector3f(tmp[0],tmp[1],tmp[2]);

    containPoint(surface);
}

float Ball::calcDistance(Vector3f v1, Vector3f v2)
{
    float dx = v2[0]-v1[0];
    float dy = v2[1]-v1[1];
    float dz = v2[2]-v1[2];

    float distance2 = dx*dx +dy*dy +dz*dz;
    float distance  = sqrt(distance2);

    return distance;
}


bool Ball::containPoint(Surface *surface)
{

    std::vector<Vector3f> stockPos;
    std::vector<Vector3f> stockDist;

    //float normCenter = mCenter.norm();
    for (int i=0; i<mPositions.size();++i )
    {

        float distance = calcDistance(mCenter,mPositions[i]);


        if(distance <= mRadius+pow(10.0,-4.0) && distance >= mRadius-pow(10.0,-4.0))
        {

            stockPos.push_back(mPositions[i]);
            /*std::cout<< "(" << mPositions[i][0] << "," << mPositions[i][1] << "," << mPositions[i][2] <<
                        ") is inside !!" << std::endl << std::endl ;*/
//            std::cout<< "is inside !!" <<stockPos.size()<< std::endl << std::endl ;

        }



    }


    if (stockPos.size()>=3)
    {
        float maxDist =0.0;
        for (int i=1; i<stockPos.size();++i)
        {
            float dist = calcDistance(stockPos[0],stockPos[i]);

            if (dist>=maxDist)
            {
                maxDist=dist;
                stockDist.insert(stockDist.begin(),stockPos[i]);
            }
            else if ( (stockDist.size()>=2) && (dist>calcDistance(stockPos[0],stockDist[1])))
            {
                stockDist.insert(stockDist.begin()+1,stockPos[i]);
            }
            else
                stockDist.push_back(stockPos[i]);

        }

        //std::cout<<"triangle built !"<< std::endl;

        giveVertices(surface,stockPos[0],stockDist[0],stockDist[1]);
        return true;
    }
    else
        return false;


}

void Ball::giveVertices(Surface* surface, Vector3f pos1, Vector3f pos2, Vector3f pos3)
{
/* Vector3f v1(0.5,0,0);
 Vector3f v2(-0.5,0,0);
 Vector3f v3(0,0.5,0);

 //face->setPos(v1,v2,v3);*/
 surface->setPos(pos1);
 surface->setPos(pos2);
 surface->setPos(pos3);
 //face->setData(v2);
 //face->setData(v3);

}

void Ball::firstPos(Surface *surface)
{
    for (int i=0; i<mPositions.size();i++)
    {
        Affine3f transform(Translation3f(this->mPositions[i]));
        this->setTransformationMatrix(transform.matrix(),surface);

        if(containPoint(surface))
            return;
    }
}

void Ball::buildSurface(Surface *surface)
{
   // Affine3f transform(Translation3f(this->mPositions[0]));

   // this->setTransformationMatrix(transform.matrix(),face);

    //containPoint(face);

    firstPos(surface);

}

void Ball::draw()
{
    if (!mReady) {
        std::cerr<<"Warning: Ball not ready for rendering" << std::endl;
        return;
    }

    glBindVertexArray(_vao);

    glDrawElements(GL_TRIANGLES, mIndices.size(),  GL_UNSIGNED_INT, 0);

    glBindVertexArray(0);

    //face->draw();


}
