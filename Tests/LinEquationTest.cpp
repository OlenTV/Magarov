#include "LinEquationTest.h"

LinEquationTest::LinEquationTest()
{
	try
	{
		QuadEquation* Equ = new QuadEquation();
		vector <float>* result;

		//0x^2+4x+2=0 x=-0.5
		result = Equ->solve(0, 4, 2);
		for (auto const& cur : *result)
		{
			if (cur != -0.5f)
				mylog.log("LINEAR_EQUATION_TEST_ERROR_NOT_EQUAL");
		}

		//0x+2=0 NON
		result = Equ->solve(0, 0, 2);
	}
	catch (const std::exception&)
	{
		mylog.log("LINEAN_EQUATION_TEST_ERROR_EXCEPTION");
	}
}