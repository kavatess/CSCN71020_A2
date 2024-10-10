#include "pch.h"
#include "CppUnitTest.h"

// Tell compiler these functions are external and written in C
extern "C" void setLength(int input, int* length);
extern "C" void setWidth(int input, int* width);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		// setLenth Unit Tests
		// setLength Test Case 1 - Length Input is Zero
		TEST_METHOD(setLengthByZeroInput)
		{
			// Arrange
			// Declare parameter variables for setLength function
			int length = 10;
			int input = 0;
			int expected = 10;

			// Act
			// Call setLength function
			setLength(input, &length);

			// Assert
			// Check if length is equal to expected value
			Assert::AreEqual(expected, length);
		}

		// setLength Test Case 2 - Length Input is Larger than 100
		TEST_METHOD(setLengthByInputLargerThan100)
		{
			// Arrange
			// Declare parameter variables for setLength function
			int length = 10;
			int input = 100;
			int expected = 10;

			// Act
			// Call setLength function
			setLength(input, &length);

			// Assert
			// Check if length is equal to expected value
			Assert::AreEqual(expected, length);
		}

		// setLength Test Case 3 - Length Input is NegativeNumber
		TEST_METHOD(setLengthByNegativeInput)
		{
			// Arrange
			// Declare parameter variables for setLength function
			int length = 10;
			int input = -100;
			int expected = 10;

			// Act
			// Call setLength function
			setLength(input, &length);

			// Assert
			// Check if length is equal to expected value
			Assert::AreEqual(expected, length);
		}

		// setWidth Unit Tests
		// setWidth Test Case 1 - Width Input is Zero
		TEST_METHOD(setWidthByZeroInput)
		{
			// Arrange
			// Declare parameter variables for setWidth function
			int width = 10;
			int input = 0;
			int expected = 10;

			// Act
			// Call setWidth function
			setWidth(input, &width);

			// Assert
			// Check if width is equal to expected value
			Assert::AreEqual(expected, width);
		}

		// setWidth Test Case 2 - Width Input is Larger than 100
		TEST_METHOD(setWidthByInputLargerThan100)
		{
			// Arrange
			// Declare parameter variables for setWidth function
			int width = 10;
			int input = 100;
			int expected = 10;

			// Act
			// Call setWidth function
			setWidth(input, &width);

			// Assert
			// Check if width is equal to expected value
			Assert::AreEqual(expected, width);
		}

		// setWidth Test Case 3 - Width Input is Negative Number
		TEST_METHOD(setWidthByNegativeInput)
		{
			// Arrange
			// Declare parameter variables for setWidth function
			int width = 10;
			int input = -100;
			int expected = 10;

			// Act
			// Call setWidth function
			setWidth(input, &width);

			// Assert
			// Check if width is equal to expected value
			Assert::AreEqual(expected, width);
		}
	};
}
