#ifndef _SHAPES_H
#define _SHAPES_H

#include "common.h"
#include "Shader.h"

#include <eigen3/Eigen/Geometry>

class ShapeS {
public:
    ShapeS() : mReady(false), mTransformation(Eigen::Matrix4f::Identity()) {}

    virtual void init(const Shader *shader) = 0;
    virtual void draw() const = 0;

    const Eigen::Matrix4f& getTransformationMatrix() const { return mTransformation; }
    void setTransformationMatrix(const Eigen::Matrix4f& transfo) { mTransformation = transfo; }

protected:
    bool mReady;

    Eigen::Matrix4f mTransformation;
};

#endif // _SHAPES_H
