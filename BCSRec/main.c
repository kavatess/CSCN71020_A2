#include <stdio.h>
#include <stdbool.h>

#include "main.h"

void main() {
	int length = 1;
	int width = 1;
	bool continueProgram = true;
	while (continueProgram) {
		printWelcomeMenu();

		printOptions();

		int menuInput;
		menuInput = getIntInput("Enter menu option number:");

		switch (menuInput)
		{
		case 1:
		{
			printf("\nThe Rectangle has a length of %i and a width of %i\n\n", length, width);
			break;
		}
		case 2:
		{
			int input = getIntInput("Please enter the length of the rectangle:");
			setLength(input, &length);
			break;
		}
		case 3:
		{
			int input = getIntInput("Please enter the width of the rectangle:");
			setWidth(input, &width);
			break;
		}
		case 4:
		{
			printf("\nThe Rectangle has a perimeter of %i\n\n", getPerimeter(&length, &width));
			break;
		}
		case 5:
		{
			printf("\nThe Rectangle has an area of %i\n\n", getArea(&length, &width));
			break;
		}
		case 6:
		{
			continueProgram = false;
			break;
		}
		default:
		{
			printf("\nInvalid value entered.\n\n");
			break;
		}
		}
	}
}

int getIntInput(char message[]) {
	int input;
	int scannedValues;
	do {
		printf("\n%s\n",message);
		scannedValues = scanf_s("%i", &input);
		int buf;
		while ((buf = getchar()) != '\n' && buf != EOF);
	} while (scannedValues != 1);
	return input;
}

// Fixed the condition of setLength function
void setLength(int input, int *length) {
	// The condition accepted 0 as a valid input, which is incorrect
	// if (input >= 0 && input < 100) {
	// Fix by removing the equal 0 condition
	if (input > 0 && input < 100) {
		*length = input;
	}
}

// Fixed the condition of setLength function
void setWidth(int input, int *width) {
	// The condition accepted 100 as a valid input, which is incorrect
	// if (input > 0 && input <= 100) {
	// Fix by removing the equal 100 condition
	if (input > 0 && input < 100) {
		*width = input;
	}
}

// Fixed the calculation for the perimeter
int getPerimeter(int *length, int *width) {
	// The perimeter calculation is wrong, because the width is only added one time
	// int perimeter = *length + *length + *width;
	// Fix by multiplying width by 2
	int perimeter = 2 * (*length) + 2 * (*width);
	return perimeter;
}

int getArea(int *length, int *width) {
	int area = *length * *width;
	return area;
}

void printWelcomeMenu() {
	printf(" **********************\n");
	printf("**     Welcome to     **\n");
	printf("**    Assignment 02   **\n");
	printf(" **********************\n");
}

void printOptions() {
	printf("1. Get Rectange Length & Width\n");
	printf("2. Change Rectangle Length\n");
	printf("3. Change Rectangle Width\n");
	printf("4. Get Rectangle Perimeter\n");
	printf("5. Get Rectangle Area\n");
	printf("6. Exit\n");
}