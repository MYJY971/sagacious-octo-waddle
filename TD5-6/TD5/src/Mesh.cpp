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

    glDrawElements(drawEdges ? GL_LINE_LOOP : GL_TRIANGLES, mIndices.size()*sizeof(Vector3i),  GL_UNSIGNED_INT, 0);

    glBindVertexArray(0);
}

void Mesh::initEdges(Shader *shader)
{
//    mPositionsHole.push_back(p1);
//    mPositionsHole.push_back(p2);

//    mNormalsHole.push_back(n1);
//    mNormalsHole.push_back(n2);


    glGenVertexArrays(1,&mVaoHole);
    glGenBuffers(2,mBufsHole);

    glBindVertexArray(mVaoHole);

    glBindBuffer(GL_ARRAY_BUFFER,mBufsHole[0]);
    glBufferData(GL_ARRAY_BUFFER, sizeof(Vector3f)*mPositionsHole.size(), mPositionsHole.data(), GL_STATIC_DRAW);

    glBindBuffer(GL_ARRAY_BUFFER,mBufsHole[1]);
    glBufferData(GL_ARRAY_BUFFER, sizeof(Vector3f)*mNormalsHole.size(), mNormalsHole.data(), GL_STATIC_DRAW);

    //specifyVertexData(shader);

    glBindVertexArray(0);

    mReadyHole=true;


}

void Mesh::drawEdges(Shader *shader)
    {
//        Point3f mPoints[2] = {p1, p2};


//        unsigned int vertexBufferId;
//        glGenBuffers(1,&vertexBufferId);
//        glBindBuffer(GL_ARRAY_BUFFER, vertexBufferId);
//        glBufferData(GL_ARRAY_BUFFER, sizeof(Point3f)*2, mPoints[0].data(), GL_STATIC_DRAW);

//        unsigned int vertexArrayId;
//        glGenVertexArrays(1,&vertexArrayId);

//        // bind the vertex array
//        glBindVertexArray(vertexArrayId);

//        glBindBuffer(GL_ARRAY_BUFFER, vertexBufferId);

//        int vertex_loc = prg->attrib("vtx_position");
//        glVertexAttribPointer(vertex_loc, 3, GL_FLOAT, GL_FALSE, 0, (void*)0);
//        glEnableVertexAttribArray(vertex_loc);

//        glDrawArrays(GL_LINES,0,2);

//        glDisableVertexAttribArray(vertex_loc);
//        glBindVertexArray(0);

//        glBindBuffer(GL_ARRAY_BUFFER, 0);
//        glDeleteBuffers(1, &vertexBufferId);
//        glBindVertexArray(0);
//        glDeleteVertexArrays(1, &vertexArrayId);


    if (!mReadyHole) {
        //std::cerr<<"Warning: PointCloud not ready for rendering" << std::endl;
        return;
    }
          glBindVertexArray(mVaoHole);
          if(mShader->id() != shader->id()){
              specifyVertexData(shader);
          }

          glDrawArrays(GL_LINES, 0, mPositionsHole.size());
          GL_TEST_ERR;
          glBindVertexArray(0);





    }




