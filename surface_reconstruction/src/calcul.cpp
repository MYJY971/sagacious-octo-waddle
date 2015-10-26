#include "calcul.h"

using namespace Eigen;

calcul::calcul()
{
}

float calcul::calcDistance(Vector3f v1, Vector3f v2)
{
    float dx = v2[0]-v1[0];
    float dy = v2[1]-v1[1];
    float dz = v2[2]-v1[2];

    float distance2 = dx*dx +dy*dy +dz*dz;
    float distance  = sqrt(distance2);

    return distance;
}
