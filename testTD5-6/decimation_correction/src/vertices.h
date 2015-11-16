#ifndef VERTICES_H
#define VERTICES_H

#include "Pointcloud.h"
#include <vector>
#include"Mesh.h"


class Vertices : public PointCloud
{
public:
    Vertices(Mesh *mesh);
    ~Vertices();

    void init(Shader *shader);
    void draw(Shader *shader, bool drawEdges=false);
    void specifyVertexData(Shader *shader);

private:
    std::vector<Eigen::Vector3f> mPositions;
    std::vector<Eigen::Vector3f> mNormals;
    GLuint mVao;
    GLuint mBufs[2];//Positions,Normals
    int nbVertices;



};

#endif // VERTICES_H
