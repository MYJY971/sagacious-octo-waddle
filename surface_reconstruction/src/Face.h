#ifndef FACE_H
#define FACE_H

#include <vector>
#include <eigen3/Eigen/Geometry>
#include "Edge.h"
#include "Pointcloud.h"

class Face :public PointCloud
{
public:
    Face(Eigen::Vector3f A, Eigen::Vector3f B, Eigen::Vector3f C);

    float getArea();
    bool equal(Face F);
    Eigen::Vector3f getA();
    Eigen::Vector3f getB();
    Eigen::Vector3f getC();
    Edge* getBiggestEdge();


     Eigen::Vector3f pA;
     Eigen::Vector3f pB;
     Eigen::Vector3f pC;

     Edge* AB;
     Edge* BC;
     Edge* CA;

     std::vector<Edge*> mEdges;
private:
//    Eigen::Vector3f pA;
//    Eigen::Vector3f pB;
//    Eigen::Vector3f pC;

//    Edge AB;
//    Edge BC;
//    Edge CA;
    float area;


};

#endif // FACE_H
