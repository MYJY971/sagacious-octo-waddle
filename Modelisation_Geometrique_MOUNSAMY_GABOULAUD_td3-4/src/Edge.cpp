#include "Edge.h"

using namespace Eigen;

//Edge
Edge::Edge(Vector3f A, Vector3f B)
{
    p1=A;
    p2=B;
    lenght=getLenght();
}

float Edge::getLenght(){
    float dx = p2[0]-p1[0];
    float dy = p2[1]-p1[1];
    float dz = p2[2]-p1[2];

    float distance2 = dx*dx +dy*dy +dz*dz;
    float distance  = sqrt(distance2);

    return distance;
}

Vector3f Edge::getP1()
{
    return p1;
}

Vector3f Edge::getP2()
{
    return p2;
}


Vector3f Edge::getMiddle()
{
    Vector3f middle;
    if(p1.norm()>p2.norm())
        middle=p2+Vector3f((p1[0]-p2[0])/2,(p1[1]-p2[1])/2,(p1[2]-p2[2])/2);
    else
        middle=p1+Vector3f((p2[0]-p1[0])/2,(p2[1]-p1[1])/2,(p2[2]-p1[2])/2);

    return middle;
}

bool Edge::equal(Edge E){
    if ((p1==E.getP1() && p2==E.getP2()) || (p1==E.getP2() && p2==E.getP1()) )
        return true;
    else
        return false;
}
