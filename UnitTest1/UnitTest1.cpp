#include "pch.h"
#include "CppUnitTest.h"

// Tell compiler these functions are external and written in C
extern "C" int getPerimeter(int* length, int* width);
extern "C" int getArea(int* length, int* width);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		// getPerimeter Unit Test
		TEST_METHOD(getPerimeterTest)
		{
			// Arrange
			// Declare parameter variables for getPerimeter function
			int length = 10;
			int width = 3;
			int expected = length * 2 + width * 2;

			// Act
			// Call getPerimeter function & store the result to actual var
			int actual = getPerimeter(&length, &width);

			// Assert
			// Check if actual result is equal to expected value
			Assert::AreEqual(expected, actual);
		}

		// getArea Unit Test
		TEST_METHOD(getAreaTest)
		{
			// Arrange
			// Declare parameter variables for getArea function
			int length = 20;
			int width = 5;
			int expected = length * width;

			// Act
			// Call getArea function & store the result to actual var
			int actual = getArea(&length, &width);

			// Assert
			// Check if actual result is equal to expected value
			Assert::AreEqual(expected, actual);
		}
	};
}
