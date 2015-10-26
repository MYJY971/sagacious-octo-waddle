#ifndef CALCUL_H
#define CALCUL_H

#include <eigen3/Eigen/Geometry>

class calcul
{
public:
    calcul();

    float calcDistance(Eigen::Vector3f pos1, Eigen::Vector3f pos2);
};

#endif // CALCUL_H
