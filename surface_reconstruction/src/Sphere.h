#ifndef _SPHERE_H
#define _SPHERE_H

#include "ShapeS.h"
#include <vector>
#include "Pointcloud.h"
#include "Face.h"

class Sphere : public ShapeS {

public:
    Sphere(PointCloud const * const pc, float radius=0.1f, int nU=40, int nV=40);
    ~Sphere();
    void init(const Shader *shader);
    void draw() const;
    float radius() const { return mRadius; }
    void setTransformationMatrix(const Eigen::Matrix4f& transfo, Face *face);
    bool containPoint(Face *face);
    void giveVertices(Face *face, Eigen::Vector3f pos1, Eigen::Vector3f pos2, Eigen::Vector3f pos3);
    float calcDistance(Eigen::Vector3f pos1, Eigen::Vector3f pos2);
    void buildSurface(Face *face);
    void firstPos(Face* face);

    std::vector<Eigen::Vector3f> mPositions;

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

#endif
