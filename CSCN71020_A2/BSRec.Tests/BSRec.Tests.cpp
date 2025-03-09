#include "pch.h"
#include "CppUnitTest.h"

extern "C" {
#include "..//BCSRec/main.h"
};

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace BSRecTests
{
	TEST_CLASS(CalculationTests)
	{
	public:
		
		TEST_METHOD(PerimeterFunctionality)
		{
			int length = 2;
			int width = 5;
			int result = getPerimeter(&length, &width);
			Assert::AreEqual(14, result);
		}
		TEST_METHOD(AreaFunctionality)
		{
			int length = 2;
			int width = 5;
			int result = getArea(&length, &width);
			Assert::AreEqual(10, result);
		}
	};

	TEST_CLASS(SettingTests)
	{
	public:

		//Usual Case
		TEST_METHOD(LengthSetting_Test1)
		{
			int length = 1;
			setLength(10, &length);
			Assert::AreEqual(10, length);
		}

		//Unusual Case
		TEST_METHOD(LengthSetting_Test2)
		{
			int length = 1;
			setLength(10000000, &length);
			Assert::AreEqual(1, length);
		}

		//Edge Case
		TEST_METHOD(LengthSetting_Test3)
		{
			int length = 1;
			setLength(99, &length);
			Assert::AreEqual(99, length);
		}

		//Usual Case
		TEST_METHOD(WidthSetting_Test1)
		{
			int width = 1;
			setLength(10, &width);
			Assert::AreEqual(10, width);
		}

		//Unusual Case
		TEST_METHOD(WidthSetting_Test2)
		{
			int width = 1;
			setLength(10000000, &width);
			Assert::AreEqual(1, width);
		}

		//Edge Case
		TEST_METHOD(WidthSetting_Test3)
		{
			int width = 1;
			setLength(99, &width);
			Assert::AreEqual(99, width);
		}
	};
}
