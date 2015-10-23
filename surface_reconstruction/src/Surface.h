#ifndef SURFACE_H
#define SURFACE_H


#include <vector>
#include "Pointcloud.h"


class Edge
{
public:
    Edge(Eigen::Vector3f A, Eigen::Vector3f B);

    float getLenght();
    bool equal(Edge E);
    Eigen::Vector3f getP1();
    Eigen::Vector3f getP2();


private:
    Eigen::Vector3f p1;
    Eigen::Vector3f p2;
    float lenght;


friend class Surface;
};


class Surface : public PointCloud
{
public:
    Surface();
    ~Surface();

    void init(const Shader *shader);
    void draw() const;
    void setPos(Eigen::Vector3f pos1);
    void setData(Eigen::Vector3f pos1);

    std::vector<Edge> mEdges;

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
