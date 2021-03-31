#pragma once
#include <math.h>
#include "../core/EquationInterface.cpp"
#include "MyLog.h"
#include "MagarovException.h"

namespace Magarov
{
    class LinEquation : protected EquationInterface
    {
    public:
       vector <float> *solve(float numA, float numB );
    };
}