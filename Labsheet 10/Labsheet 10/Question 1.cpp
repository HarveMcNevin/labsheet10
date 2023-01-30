#include <iostream> 
#include <cstdlib>
#include <ctime>


int main1() {
	
	//sets seed for RNG
	srand(time(nullptr));
	
	//constant to declare array size
	const int ARRAYSIZE = 10;

	int randArray[ARRAYSIZE]{};


	for(int i = 0; i < ARRAYSIZE; i++)
	{
		randArray[i] = rand() % 1 + 5;//random number between 5-15
		std::cout << " ," << randArray[i];
	}
	
	std::cout << std::endl;

	for(int i = ARRAYSIZE-1; i >= 0; i--)
	{
		std::cout << " ," << randArray[i];
	}

	std::cout << std::endl;

	for(int i = 0; i < ARRAYSIZE; i+=2)
	{
		std::cout << " ," << randArray[i];
	}
	return 0;

}