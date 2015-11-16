#ifndef EDGE_H
#define EDGE_H

#include <vector>
#include <eigen3/Eigen/Geometry>
#include "Pointcloud.h"


class Edge
{
public:
    Edge(Eigen::Vector3f A, Eigen::Vector3f B);

    float getLenght();
    bool equal(Edge E);
    Eigen::Vector3f getP1();
    Eigen::Vector3f getP2();
    Eigen::Vector3f getMiddle();

    Eigen::Vector3f p1;
    Eigen::Vector3f p2;
private:
//    Eigen::Vector3f p1;
//    Eigen::Vector3f p2;
    float lenght;



};
#endif // EDGE_H
