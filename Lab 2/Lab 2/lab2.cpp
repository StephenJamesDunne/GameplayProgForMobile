// Lab 2 Questions
// Stephen Dunne
// C00194821


#include "lab2.h"

// add your tests here.
int main()
{
	//example of calling the functions

	int array[4][6] = { {0,0,3,3,2,4},
					    {0,1,2,3,4,0},
					    {0,2,1,3,0,2},
					    {0,2,1,3,1,1} };

	//int array2[4][6] = {0,0,2,2,2,2}
	PrintArray(array);
	int score = ReplaceWithMinusOne(array);

	std::cout << "- Score: " << score << std::endl;

	std::cout << std::endl;
	PrintArray(array);

	FallDownAndReplace(array);

	PrintArray(array);


	std::cin.get();

}