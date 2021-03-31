#pragma once
#include "LinEquation.h"

namespace Magarov
{
    class QuadEquation : protected LinEquation
    {
    public:
        vector<float>* solve(float numA, float numB, float numC);
    protected:
       float DoDiscriminant(float numA, float numB, float numC);
    };
}