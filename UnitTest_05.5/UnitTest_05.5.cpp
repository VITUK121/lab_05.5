#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_05.5/lab_05.5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest055
{
	TEST_CLASS(UnitTest055)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int deep = 0;
			Assert::AreEqual(6, A(0, 5, deep));
		}
		TEST_METHOD(TestMethod2)
		{
			int deep = 0;
			Assert::AreEqual(5, A(1, 3, deep));
		}
		TEST_METHOD(TestMethod3)
		{
			int deep = 0;
			Assert::AreEqual(7, A(2, 2, deep));
		}
	};
}
