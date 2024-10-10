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
			int maxDepth = 0;
			Assert::AreEqual(2, geometricTerm(2, 3, 1, 1, maxDepth));
			Assert::AreEqual(6, geometricTerm(2, 3, 2, 1, maxDepth));
		}

		TEST_METHOD(TestGeometricSum)
		{
			int maxDepth = 0;
			Assert::AreEqual(2, geometricSum(2, 3, 1, 1, maxDepth));
			Assert::AreEqual(8, geometricSum(2, 3, 2, 1, maxDepth));
		}
	};
}
