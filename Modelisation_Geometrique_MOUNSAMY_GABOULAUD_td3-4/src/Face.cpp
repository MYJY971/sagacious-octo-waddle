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

   Edge * e= this->getBiggestEdge();
}

Edge* Face::getBiggestEdge(){
    if(AB->getLenght()>BC->getLenght())
    {
        if(AB->getLenght()>CA->getLenght())
        {
            mEdges.push_back(AB);
            if(BC->getLenght()>CA->getLenght())
            {
                mEdges.push_back(BC);
                mEdges.push_back(CA);
            }
            else
            {
                mEdges.push_back(CA);
                mEdges.push_back(BC);
            }
            return AB;
        }
        else
        {
            mEdges.push_back(CA);
            if(BC->getLenght()>AB->getLenght())
            {
                mEdges.push_back(BC);
                mEdges.push_back(AB);
            }
            else
            {
                mEdges.push_back(AB);
                mEdges.push_back(BC);
            }

            return CA;
        }

    }
    else
    {
        if(BC->getLenght()>CA->getLenght())
        {
            mEdges.push_back(BC);
            if(CA->getLenght()>AB->getLenght())
            {
                mEdges.push_back(CA);
                mEdges.push_back(AB);
            }
            else
            {
                mEdges.push_back(AB);
                mEdges.push_back(CA);
            }
            return BC;
        }
        else
        {
            mEdges.push_back(CA);
            if(BC->getLenght()>AB->getLenght())
            {
                mEdges.push_back(BC);
                mEdges.push_back(AB);
            }
            else
            {
                mEdges.push_back(AB);
                mEdges.push_back(BC);
            }

            return CA;
        }
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
