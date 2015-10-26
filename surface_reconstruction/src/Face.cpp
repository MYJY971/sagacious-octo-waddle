#include "Face.h"
using namespace Eigen;


//Face
Face::Face(Vector3f A, Vector3f B, Vector3f C)
{
    pA=A;
    pB=B;
    pC=C;

    //Edge* test= new Edge(A, B);
    //test=new Edge(A,B);
   AB=new Edge(A,B);
   BC=new Edge(B,C);
   CA=new Edge(C,A);
}

Edge* Face::getBiggestEdge(){
    if(AB->getLenght()>BC->getLenght())
    {
        if(AB->getLenght()>CA->getLenght())
            return AB;
        else
            return CA;

    }
    else
    {
        if(BC->getLenght()>CA->getLenght())
            return BC;
        else
            return CA;
    }
}

bool Face::equal(Face F)
{
    if( (F.pA==pA || F.pA==pB || F.pA==pC ) && (F.pB==pA || F.pB==pB || F.pB==pC ) &&
            (F.pC==pA || F.pC==pB || F.pC==pC ) )
        return true;
    else
        return false;
}


Vector3f Face::getA(){
    return pA;
}

Vector3f Face::getB(){
    return pB;
}

Vector3f Face::getC(){
    return pC;
}
