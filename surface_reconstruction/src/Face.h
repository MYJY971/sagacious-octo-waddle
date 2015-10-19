#ifndef FACE_H
#define FACE_H

#include "ShapeS.h"
#include <vector>

class Face : public ShapeS
{
public:
    Face();
    ~Face();

    void init(const Shader *shader);
    void draw() const;
    void setPos(Eigen::Vector3f pos1);
    void setData(Eigen::Vector3f pos1);

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

#endif // FACE_H
