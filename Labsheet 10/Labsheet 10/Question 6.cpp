#include <iostream>
#include <string>

//GLOBAL variables 
const int MAX_PLAYERS = 8;
std::string namesArray[MAX_PLAYERS]{};
int healthArray[MAX_PLAYERS];

//Functions
int calculateSum();
float calculateAvg(int t_sum);
void initializeArrays();
void displayPlayers();
void displayReversePlayers();
void findHighestHealth();
void findLowestHealth(); 
int findFirstHealthValue(int t_firstHealthValue);//question 7
void findAllHealthValues(int t_healthValue);//question 8
int findLastName(std::string t_aName); // question 9

int main()
{	
	initializeArrays();
	
		std::string aName = "";
		int nameIndexPosition = 0;
		int healthValue = 0;
		int allHealthValues = 0;
		int indexPosition = 0;
		std::cout << "Enter a health value: ";
		std::cin >> healthValue;
		indexPosition = findFirstHealthValue(healthValue);
		if (indexPosition == -1)
		{
			std::cout << "Health Value not found \n";
		}
		else
		{
			std::cout << "Health value " << healthValue << " was found first at index position: " << indexPosition << "\n";
	    }
		////////////////////////////////////////////////////////////
		std::cout << "Enter a health value: ";
		std::cin >> allHealthValues;
		findAllHealthValues(allHealthValues);
		////////////////////////////////////////////////////////////
		std::cout << "Enter a name: ";
		std::cin >> aName;
		nameIndexPosition = findLastName(aName);
		if(nameIndexPosition == -1)
		{
			std::cout << "Name was not found in the array.\n";
		}
		else
		{
			std::cout << "Name value " << aName << " was found last at index position: " << nameIndexPosition << "\n";
		}

	
	//int findAllHealthValues();
	int sum = 0;
	float average = 0;
	
	sum = calculateSum();
	average = calculateAvg(sum);
	//std::cout << "The sum of the players health is: " << sum << "\n";
	//std::cout << "The average of the players health is: " << average << "\n";

	//displayPlayers();
	//displayReversePlayers();
	//findHighestHealth();
	//findLowestHealth();
	return 0;
}

//This function ititializes the arrays
void initializeArrays()
{

namesArray[0] = "Tom";
namesArray[1] = "Sam";
namesArray[2] = "Ann";
namesArray[3] = "Ki";
namesArray[4] = "Joe";
namesArray[5] = "Ray";
namesArray[6] = "Dave";
namesArray[7] = "Sue";

healthArray[0] = 3;
healthArray[1] = 6;
healthArray[2] = 2;
healthArray[3] = 1;
healthArray[4] = 4;
healthArray[5] = 6;
healthArray[6] = 1;
healthArray[7] = 6;

}

//This function calculates the sum of the health array
int calculateSum()
{
	int sum = 0;
	for(int i = 0; i < 8; i++)
	{
		sum = sum + healthArray[i];
	}

	return sum;

}

//This function calculates the average of the health array
float calculateAvg(int t_sum)
{

	float average = 0;
	average = t_sum / (float) (MAX_PLAYERS);
	return average;
	

}

//This function displays each player and their respective health value
void displayPlayers()
{
	for(int i = 0; i < 8; i++)
	{
	
		std::cout << namesArray[i] << " has a health of: " << healthArray[i] << std::endl;

	}
	std::cout << "\n";
}

//This function displays each player and their respective health value in reverse order
void displayReversePlayers()
{

	for(int i = 7; i >= 0; i--)
	{
	
		std::cout << namesArray[i] << " has a health of: " << healthArray[i] << std::endl;

	}
}
//This function find the largest value in the health array
void findHighestHealth()
{
	int highest = 0;
	std::string highestPlayer = "";
	for(int i = 0; i < MAX_PLAYERS; i++)
	{
	
		if(healthArray[i] > highest)
		{
			highest = healthArray[i];
			highestPlayer = namesArray[i];
		}
		
	}
	std::cout  << "The highest health in the array is: " << highest << "\n";
}
//This function finds the smallest value in the health array
void findLowestHealth()
{

	int lowest = 0;

	for (int i = 0; i < 8; i++)
	{
		if(i == 0)
		{
			lowest = healthArray[i];
		}

		if (healthArray[i] < lowest)
		{
			lowest = healthArray[i];
		}

	}
	std::cout << "The lowest health in the array is: " << lowest << "\n";
}
//This function finds the first index position of a given value
int findFirstHealthValue(int t_firstHealthValue)
{
	int ii = 0;
		for(int i = 0; i < MAX_PLAYERS; i++)
		{
			healthArray[i];

			if(healthArray[i] == t_firstHealthValue)
			{
				ii = i;
				break;
			}
			else
			{
				ii = -1;
			}
		}

		return ii;
}
//This function finds every instance of a given value and displays each coresponding name
void  findAllHealthValues(int t_healthValue)
{
	int t = 0;

	for (int i = 0; i < MAX_PLAYERS; i++)
	{
		healthArray[i];

		if(healthArray[i] == t_healthValue)
		{
			std::cout << "Player " << namesArray[i] << " has a health value of: " << t_healthValue << std::endl;
		}
		else
		{
			t++;
		}
	}
	if(t == MAX_PLAYERS)
	{
		std::cout << "Health Value not found in the array. \n";
	}
}

int findLastName(std::string t_aName)
{
	for (int i = MAX_PLAYERS - 1; i >= 0; i--)
	{
		namesArray[i];

		if (namesArray[i] == t_aName)
		{
			return i;
			break;
		}
	}
	return -1;
}

