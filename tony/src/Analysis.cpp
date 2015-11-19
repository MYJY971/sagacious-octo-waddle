#include "Analysis.h"


Analysis::Analysis(const Mesh &_mesh) : mesh(_mesh)
{

    nbVertices = 0;
    nbFaces = 0;
    nbHoles = 0;
    nbConnectedComponents = 0;

    // face iterator
   // Surface_mesh::Face_iterator fit, fend = mHalfEdge.faces_end();
    // vertex circulator
    Surface_mesh::Edge_iterator it;
    Surface_mesh::Vertex_around_face_circulator fvit, fvend;
    Surface_mesh::Vertex v0, v1, v2;
    Surface_mesh::Edge edge;

    for (it = mHalfEdge.edges_begin(); it !=  mHalfEdge.edges_begin(); ++it)
    {
        edge = *it;
        if (edge.pair == NULL){
            mIndicesEdges.add(edge.getVertex.previous());
            mIndicesEdges.add(edge.getVertex.next());

        }
        for ()

        fvit = fvend = mHalfEdge.vertices(*fit);

        v0 = *fvit;
        ++fvit;
        v2 = *fvit;
        if (v0)
        do{
            v1 = v2;
            ++fvit;
            v2 = *fvit;
            mIndices.push_back(Vector3i(v0.idx(), v1.idx(), v2.idx()));
        } while (++fvit != fvend);
    }

//    nbVertices = positions.size();

}

void draw(Shader *shader, bool drawEdges = false){

    if (!mReady) {
        cerr<<"Warning: Mesh not ready for rendering" << endl;
        return;
    }

    glBindVertexArray(mVao);

    if(mShader->id() != shader->id()){
        specifyVertexData(shader);
    }

    drawEdges ? glPolygonMode( GL_FRONT_AND_BACK, GL_LINE ) : glPolygonMode( GL_FRONT_AND_BACK, GL_FILL ) ;
    glDrawElements(GL_LINE, mIndicesEdges.size()*sizeof(Vector3i),  GL_UNSIGNED_INT, 0);

    glBindVertexArray(0);

}

int Analysis::getNbFaces()
{
    return nbFaces;
}

int Analysis::getNbVertices()
{
    return nbVertices;
}

int Analysis::getNbHoles() const
{
    return nbHoles;
}

int Analysis::getNbConnectedComponent() const
{
    return nbConnectedComponents;
}


