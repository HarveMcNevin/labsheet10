#include <iostream> 

int main2()
{
	//Array with 9 floats
	float floatArray[9];

	int odd = 0;
	int even = 0;
	int input = 0;

	//will loop 9 times
	for(int i = 0; i < 9; i++ )
	{
	
		std::cout << "Enter number " << i + 1 << ": ";
		std::cin >> floatArray[i];

		input = (int) floatArray[i]; // changes floats to ints

		if (input % 2 == 0)
		{
			even++;
		}
		
		if (input % 2 != 0)
		{
			odd++;
		}

	}

	std::cout << even << " :even" << std::endl;

	std::cout << odd << " :odd" << std::endl;

	return 0;


}