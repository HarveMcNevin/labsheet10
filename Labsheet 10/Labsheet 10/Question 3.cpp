#include <iostream>

void arrayCalculations();
int main3()
{
	arrayCalculations();
	return 0;
}


void arrayCalculations()
{
	const int arraySize = 8;
	int rayray[arraySize]{};
	int largest = 0;
	int smallest = 0;
	int sum = 0;
	float average = 0;

	for (int i = 0; i < 8; i++)
	{
		std::cout << "Enter number " << i + 1 << ": ";
		std::cin >> rayray[i];

		while (rayray[i] < 1 || rayray[i] > 10)
		{
			std::cout << "Enter a number between 1-10: ";
			std::cin >> rayray[i];
		}

		if (rayray[i] > largest)
		{
			largest = rayray[i];
		}

		if (i == 0)
		{
			smallest = rayray[i];
		}


		if (rayray[i] < smallest)
		{
			smallest = rayray[i];
		}

		sum = sum + rayray[i];


		average = (float)i + 1.0;

	}

	average = sum / average;

	std::cout << "The largest number is: " << largest << std::endl;
	std::cout << "The smallest number is: " << smallest << std::endl;
	std::cout << "The average is: " << average << std::endl;
	std::cout << "The sum is: " << sum << std::endl;
}