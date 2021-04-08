#include "LinEquation.h"

namespace Magarov
{
	vector<float> *LinEquation::solve(float numA, float numB)
	{
		if (numA == 0)
		{
			throw MagarovException("Invalid equation\n\r");
		} 
		return new vector<float>{ -numB / numA };
	}
}