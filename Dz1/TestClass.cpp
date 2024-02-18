#include <iostream>
#include "TestClass.h"
#include "Point.h"
#include "Simplex.h"
#include "OptLib.h"

namespace OptLib
{
	void TestClass::Test0()
	{
		Point<4> P{1.2, 2.1, 3.6, 4.7};
		std::cout << P << std::endl;
	}


	void TestClass::Test1()
	{
		OptLib::Point<4> P;
		RawPoint<4> R{ P };
		std::cout << R.P << std::endl;
		R[0] = 1.0;
		R[2] = 3.4;
		std::cout << R.P << std::endl;
	}
	void TestClass::Test2()
	{
		OptLib::Point<4> P;
		RawPoint<4> R {std::move(P)};
		std::cout << R.P << std::endl;
		R[0] = 2.0;
		R[1] = 1.1;
		R[2] = 5.4;
		std::cout << R.P << std::endl;

	}
	void TestClass::Test3()
	{
		OptLib::Point<4> P;
		RawPoint<4> RP{P};

		std::cout << RP.P << std::endl;
		RP[0] = 2.1;
		RP[2] = 4.0;
		std::cout << RP.P << std::endl;
		
	}
	void TestClass::Test4()
	{
		OptLib::Point<4> P;
		RawPoint<4> RP{ P };

		std::cout << RP.P << std::endl;
		double chislo = 2.0;
		OptLib::Point<4> result_addition = RP.P + chislo;
		OptLib::Point<4> result_subtraction = RP.P - chislo;
		OptLib::Point<4> result_multiplication = RP.P * chislo;
		OptLib::Point<4> result_division = RP.P/chislo;
		std::cout << result_addition << std::endl;
	}
} // OptLib


