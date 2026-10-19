
#include "pch.h"
#include "CppUnitTest.h"
#include "../ЛР 5.5/ЛР 5.5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace test55
{
	TEST_CLASS(test55)
	{
	public:

		TEST_METHOD(TestPascal_Top)
		{
			int result = pascal(0, 0);
			Assert::AreEqual(1, result);
		}

		TEST_METHOD(TestPascal_Row2)
		{
			int result = pascal(2, 1);
			Assert::AreEqual(2, result);
		}

		TEST_METHOD(TestPascal_Row3)
		{
			int result = pascal(3, 1);
			Assert::AreEqual(3, result);
		}

		TEST_METHOD(TestPascal_Row4)
		{
			int result = pascal(4, 2);
			Assert::AreEqual(6, result);
		}

		TEST_METHOD(TestPascal_Row5)
		{
			int result = pascal(5, 2);
			Assert::AreEqual(10, result);
		}
	};
}