#include "QuadEquation.h"

namespace Magarov
{
    float QuadEquation::DoDiscriminant(float numA, float numB, float numC)
    {
        return powf(numB, 2) - 4 * numA * numC;
    }

    vector <float> *QuadEquation::solve(float numA, float numB, float numC)
    {
        if (numA == 0)
        {
            return LinEquation::solve(numB, numC);
        }
        float D = DoDiscriminant(numA,  numB, numC);
        if (D > 0)
        {
            return new vector<float>{ (-numB + sqrtf(D)) / (2 * numA)
                                    , (-numB - sqrtf(D)) / (2 * numA) };
        }
        if (D == 0)
        {
            return new vector<float>{ -numB / (2 * numA) };
        }
        throw MagarovException("No Roots");
        //return new vector<float>{};
    }
}