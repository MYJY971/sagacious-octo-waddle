#include "Mesh.h"
#include "Meshloader.h"

#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdio>

using namespace std;
using namespace Eigen;
using namespace surface_mesh;

Mesh::~Mesh()
{
    if(mReady){
        glDeleteBuffers(1, &mIndicesBuffer);
        glDeleteVertexArrays(1,&mVao);
    }
}

void Mesh::load(const string& filename)
{
    cout << "Loading: " << filename << endl;

    mHalfEdge.read(filename);
    mHalfEdge.update_face_normals();
    mHalfEdge.update_vertex_normals();

    // vertex properties
    Surface_mesh::Vertex_property<Point> vertices = mHalfEdge.get_vertex_property<Point>("v:point");
    Surface_mesh::Vertex_property<Point> vnormals = mHalfEdge.get_vertex_property<Point>("v:normal");

    // vertex iterator
    Surface_mesh::Vertex_iterator vit;

    for(vit = mHalfEdge.vertices_begin(); vit != mHalfEdge.vertices_end(); ++vit)
    {
        mPositions.push_back(Vector3f(vertices[*vit][0],vertices[*vit][1],vertices[*vit][2]));
        mNormals.push_back(Vector3f(vnormals[*vit][0],vnormals[*vit][1],vnormals[*vit][2]));
    }

    // face iterator
    Surface_mesh::Face_iterator fit, fend = mHalfEdge.faces_end();
    // vertex circulator
    Surface_mesh::Vertex_around_face_circulator fvit, fvend;
    Surface_mesh::Vertex v0, v1, v2;
    for (fit = mHalfEdge.faces_begin(); fit != fend; ++fit)
    {
        fvit = fvend = mHalfEdge.vertices(*fit);
        v0 = *fvit;
        ++fvit;
        v2 = *fvit;

        do{
            v1 = v2;
            ++fvit;
            v2 = *fvit;
            mIndices.push_back(Vector3i(v0.idx(), v1.idx(), v2.idx()));
        } while (++fvit != fvend);
    }
}

void Mesh::init(Shader *shader)
{
    PointCloud::init(shader);

    glBindVertexArray(mVao);

    glGenBuffers(1, &mIndicesBuffer);
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, mIndicesBuffer);
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(Vector3i)*mIndices.size(), mIndices.data(),  GL_STATIC_DRAW);

    glBindVertexArray(0);

    mReady = true;
}

void Mesh::draw(Shader *shader, bool drawEdges) 
{
    if (!mReady) {
        cerr<<"Warning: Mesh not ready for rendering" << endl;
        return;
    }

    glBindVertexArray(mVao);

    if(mShader->id() != shader->id()){
        specifyVertexData(shader);
    }

    drawEdges ? glPolygonMode( GL_FRONT_AND_BACK, GL_LINE ) : glPolygonMode( GL_FRONT_AND_BACK, GL_FILL ) ;
    glDrawElements(GL_TRIANGLES, mIndices.size()*sizeof(Vector3i),  GL_UNSIGNED_INT, 0);
    //glDrawElements(drawEdges ? GL_LINE_LOOP : GL_TRIANGLES, mIndices.size()*sizeof(Vector3i),  GL_UNSIGNED_INT, 0);

    glBindVertexArray(0);
}



void Mesh::specifyVertexDataHole(Shader *shader)
{
    mShaderHole = shader;

    glBindBuffer(GL_ARRAY_BUFFER, mBufsHole[0]);
    int pos_loc = shader->getAttribLocation("vtx_position");
    glEnableVertexAttribArray(pos_loc);
    glVertexAttribPointer(pos_loc, 3, GL_FLOAT, GL_FALSE, sizeof(Vector3f), (void*)0);

    glBindBuffer(GL_ARRAY_BUFFER, mBufsHole[1]);
    int normal_loc = shader->getAttribLocation("vtx_normal");
    if(normal_loc>=0){
        glEnableVertexAttribArray(normal_loc);
        glVertexAttribPointer(normal_loc, 3, GL_FLOAT, GL_FALSE, sizeof(Vector3f), (void*)0);
    }
}



void Mesh::initEdges(Shader *shader)
{


    glGenVertexArrays(1,&mVaoHole);
    glGenBuffers(2,mBufsHole);

    glBindVertexArray(mVaoHole);

    glBindBuffer(GL_ARRAY_BUFFER,mBufsHole[0]);
    glBufferData(GL_ARRAY_BUFFER, sizeof(Vector3f)*mPositionsHole.size(), mPositionsHole.data(), GL_STATIC_DRAW);

    glBindBuffer(GL_ARRAY_BUFFER,mBufsHole[1]);
    glBufferData(GL_ARRAY_BUFFER, sizeof(Vector3f)*mNormalsHole.size(), mNormalsHole.data(), GL_STATIC_DRAW);

    specifyVertexDataHole(shader);




//    glBindVertexArray(0);


//    glBindVertexArray(mVaoHole);

    glGenBuffers(1, &mIndicesBufferHole);
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, mIndicesBufferHole);
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(Vector3i)*mIndicesHole.size(), mIndicesHole.data(),  GL_STATIC_DRAW);

    glBindVertexArray(0);

    mReadyHole=true;


}

void Mesh::drawEdges(Shader *shader)
    {

    if (!mReadyHole) {
        //std::cerr<<"Warning: PointCloud not ready for rendering" << std::endl;
        return;
    }
          glBindVertexArray(mVaoHole);
          if(mShader->id() != shader->id()){
              specifyVertexDataHole(shader);
          }

          //glDrawArrays(GL_TRIANGLES, 0, mPositionsHole.size());
          glDrawElements(GL_TRIANGLES, mIndicesHole.size()*sizeof(Vector3i),  GL_UNSIGNED_INT, 0);

          glBindVertexArray(0);



    }

void Mesh::detectHole(Shader *shader)
{
//    mHalfEdge.update_face_normals();
//    mHalfEdge.update_vertex_normals();

    // vertex properties
    Surface_mesh::Vertex_property<Point> vertices = mHalfEdge.get_vertex_property<Point>("v:point");
    Surface_mesh::Vertex_property<Point> vnormals = mHalfEdge.get_vertex_property<Point>("v:normal");

    // vertex iterator
    Surface_mesh::Vertex_iterator vit;

    for(vit = mHalfEdge.vertices_begin(); vit != mHalfEdge.vertices_end(); ++vit)
    {
       mPositionsHole.push_back(Vector3f(vertices[*vit][0],vertices[*vit][1],vertices[*vit][2]));
       mNormalsHole.push_back(Vector3f(vnormals[*vit][0],vnormals[*vit][1],vnormals[*vit][2]));
    }

    // face iterator
    Surface_mesh::Face_iterator fit, fend = mHalfEdge.faces_end();
    // vertex circulator
    Surface_mesh::Vertex_around_face_circulator fvit, fvend;
    Surface_mesh::Vertex v0, v1, v2;
    for (fit = mHalfEdge.faces_begin(); fit != fend; ++fit)
    {
        fvit = fvend = mHalfEdge.vertices(*fit);
        v0 = *fvit;
        ++fvit;
        v2 = *fvit;

        do{
            v1 = v2;
            ++fvit;
            v2 = *fvit;
            mIndicesHole.push_back(Vector3i(v0.idx(), v1.idx(), v2.idx()));
        } while (++fvit != fvend);
    }

    makeUnitaryPos(mPositionsHole);
    initEdges(shader);
    //drawEdges(shader);
}




