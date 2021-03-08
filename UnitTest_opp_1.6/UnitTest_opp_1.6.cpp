#include "pch.h"
#include "CppUnitTest.h"
#define _USE_MATH_DEFINES
#define M_PI 3.14159265358979323846
#include <cmath>
#include "../Project_opp_1.6/Real.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestopp16
{
	TEST_CLASS(UnitTestopp16)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double c;
			Real::Number n;
			n.Init(8);
			Real r;
			r.Init(n);
			c = r.Root(3);
			Assert::AreEqual(c, 2.0);
		}
	};
}
