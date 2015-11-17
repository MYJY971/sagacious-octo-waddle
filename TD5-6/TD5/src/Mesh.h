#ifndef MESH_H
#define MESH_H

#include "Pointcloud.h"

#include <surface_mesh/surface_mesh.h>

class Mesh : public PointCloud
{
public:
    Mesh() {}
    ~Mesh();
    void load(const std::string& filename);
    void init(Shader *shader);
    void draw(Shader *shader, bool drawEdges = false);
    void initEdges(Shader *shader);
    void drawEdges(Shader *shader);

    surface_mesh::Surface_mesh mHalfEdge;

    std::vector<Eigen::Vector3f> mPositionsHole;
    std::vector<Eigen::Vector3f> mNormalsHole;

    bool mReadyHole;

private:

    std::vector<Eigen::Vector3i> mIndices;

    //surface_mesh::Surface_mesh mHalfEdge;

    GLuint mIndicesBuffer;




    GLuint mVaoHole;
    GLuint mBufsHole[2];//Positions,Normals

};


#endif // MESH_H
