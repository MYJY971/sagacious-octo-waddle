#include "vertices.h"

using namespace Eigen;

Vertices::Vertices(Mesh* mesh)
{
    mPositions=mesh->getPositions();
    mNormals = mesh->getNormals();
    nbVertices=mesh->numPoints();
}


void Vertices::specifyVertexData(Shader *shader)
{
    mShader = shader;

    glBindBuffer(GL_ARRAY_BUFFER, mBufs[0]);
    int pos_loc = shader->getAttribLocation("vtx_position");
    glEnableVertexAttribArray(pos_loc);
    glVertexAttribPointer(pos_loc, 3, GL_FLOAT, GL_FALSE, sizeof(Vector3f), (void*)0);

    glBindBuffer(GL_ARRAY_BUFFER, mBufs[1]);
    int normal_loc = shader->getAttribLocation("vtx_normal");
    if(normal_loc>=0){
        glEnableVertexAttribArray(normal_loc);
        glVertexAttribPointer(normal_loc, 3, GL_FLOAT, GL_FALSE, sizeof(Vector3f), (void*)0);
    }
}


void Vertices::init(Shader *shader)
{

    glGenVertexArrays(1, &mVao);
    glGenBuffers(2, mBufs);

    glBindVertexArray(mVao);

    glBindBuffer(GL_ARRAY_BUFFER, mBufs[0]);
    glBufferData(GL_ARRAY_BUFFER, sizeof(Vector3f)*mPositions.size(), mPositions.data(), GL_STATIC_DRAW);

    glBindBuffer(GL_ARRAY_BUFFER, mBufs[1]);
    glBufferData(GL_ARRAY_BUFFER, sizeof(Vector3f)*mNormals.size(), mNormals.data(), GL_STATIC_DRAW);

    specifyVertexData(shader);

    glBindVertexArray(0);

    mReady = true;
}

void Vertices::draw(Shader *shader, bool drawEdges)
{
    if (!mReady) {
        std::cerr<<"Warning: PointCloud not ready for rendering" << std::endl;
        return;
    }

    glBindVertexArray(mVao);
    if(mShader->id() != shader->id()){
        specifyVertexData(shader);
    }

    glDrawArrays(GL_POINTS, 0, mPositions.size());
    GL_TEST_ERR;
    glBindVertexArray(0);
}

