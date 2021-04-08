#include "QuadEquationTest.h"

QuadEquationTest::QuadEquationTest()
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
				mylog.log("QUAD_EQUATION_TEST_ERROR_A_NULL_NOT_EQUAL");
		}

		//1x^2+2x+3=0 D=-8
		result = Equ->solve(1, 2, 3);
		for (auto const& cur : *result)
		{
			mylog.log("QUAD_EQUATION_TEST_ERROR_D_LESS_NULL");
		}

		//1x^2+4x+3=0 x=-3 x=-1 D=4
		result = Equ->solve(1, 4, 3);
		for (auto const& cur : *result)
		{
			if (cur != -3 && cur != -1)
				mylog.log("QUAD_EQUATION_TEST_ERROR_NOT_EQUAL");
		}

		//1x^2+2x+1=0 x=-1 D=0
		result = Equ->solve(1, 2, 1);
		for (auto const& cur : *result)
		{
			if (cur != -1)
				mylog.log("QUAD_EQUATION_TEST_ERROR_D_NULL_NOT_EQUAL");
		}

		//0x^2+0x+2=0 NON
		result = Equ->solve(0, 0, 2);
	}
	catch (const std::exception&) 
	{
		mylog.log("QUAD_EQUATION_TEST_ERROR_EXCEPTION");
	}
}