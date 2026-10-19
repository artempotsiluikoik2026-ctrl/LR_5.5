
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
			int depth = 0;
			int result = pascal(0, 0, 1, depth);
			Assert::AreEqual(1, result);
			Assert::AreEqual(1, depth);
		}

		TEST_METHOD(TestPascal_Row2)
		{
			int depth = 0;
			int result = pascal(2, 1, 1, depth);
			Assert::AreEqual(2, result);
			Assert::AreEqual(2, depth);
		}

		TEST_METHOD(TestPascal_Row3)
		{
			int depth = 0;
			int result = pascal(3, 1, 1, depth);
			Assert::AreEqual(3, result);
			Assert::AreEqual(3, depth);
		}

		TEST_METHOD(TestPascal_Row4)
		{
			int depth = 0;
			int result = pascal(4, 2, 1, depth);
			Assert::AreEqual(6, result);
			Assert::AreEqual(4, depth);
		}

		TEST_METHOD(TestPascal_Row5)
		{
			int depth = 0;
			int result = pascal(5, 2, 1, depth);
			Assert::AreEqual(10, result);
			Assert::AreEqual(5, depth);
		}
	};
}