#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab5.5.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestGeometricTerm)
		{
			int depth = 0;
			Assert::AreEqual(2, geometricTerm(2, 3, 1, depth));
			Assert::AreEqual(6, geometricTerm(2, 3, 2, depth));
		}
		TEST_METHOD(TestGeometricSun)
		{
			int depth = 0;
			Assert::AreEqual(2, geometricSum(2, 3, 1, depth));
			Assert::AreEqual(8, geometricSum(2, 3, 2, depth));
		}
	};
}
