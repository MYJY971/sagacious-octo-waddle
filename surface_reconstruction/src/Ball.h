#ifndef BALL_H
#define BALL_H

#include <vector>
#include "Pointcloud.h"
#include "Surface.h"


class Ball : public PointCloud {

public:
    Ball(PointCloud const * const pc, float radius=0.1f, int nU=40, int nV=40);
    ~Ball();
    void init(Shader *shader);
    void draw();
    float radius() const { return mRadius; }
    void setTransformationMatrix(const Eigen::Affine3f& transfo, Surface *surface);
    bool containPoint(Surface *surface);
    void giveVertices(Surface *surface, Eigen::Vector3f pos1, Eigen::Vector3f pos2, Eigen::Vector3f pos3);
    float calcDistance(Eigen::Vector3f pos1, Eigen::Vector3f pos2);
    void buildSurface(Surface *surface);
    void firstPos(Surface* surface);
    float getRadius();

    std::vector<Eigen::Vector3f> mPositions;
    Eigen::Vector3f axeRot;
    float angle;

private :
    GLuint _vao;
    GLuint _bufs[6];

    std::vector<int>        mIndices;   /** vertex indices */
    std::vector<Eigen::Vector3f>	mVertices;  /** 3D positions */
    std::vector<Eigen::Vector3f>	mColors;    /** colors */
    std::vector<Eigen::Vector3f>	mNormals;   /** 3D normals */
    std::vector<Eigen::Vector3f>	mTangents;  /** 3D tangent to surface */
    std::vector<Eigen::Vector2f>	mTexCoords; /** 2D texture coordinates */

    float mRadius;


    Eigen::Vector3f mCenter;

    const Shader *currentShader;
    //Face* face;

};
#endif // BALL_H
