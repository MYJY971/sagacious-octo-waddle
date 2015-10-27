#ifndef SURFACE_H
#define SURFACE_H


#include <vector>
#include "Pointcloud.h"
#include "Face.h"


class Surface : public PointCloud
{
public:
    Surface();
    ~Surface();

    void init(const Shader *shader);
    void draw() const;
    void setFace(Face* face);
    void setPos(Eigen::Vector3f pos1/*, Eigen::Vector3f n*/);

    //std::vector<Edge> mEdges;
    std::vector<Face> mFaces;

private:
    GLuint mBufs[4];
    GLuint mVAO;
    std::vector<int>        mIndices;   /** vertex indices */
    std::vector<Eigen::Vector3f>	mVertices;  /** 3D positions */
    std::vector<Eigen::Vector3f>	mColors;    /** colors */
    std::vector<Eigen::Vector3f>	mNormals;   /** 3D normals */

protected:
    bool mReady;
};

#endif // SURFACE_H
