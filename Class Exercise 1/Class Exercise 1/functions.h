// Stephen Dunne
// C00194821


#pragma once
#include <iostream>

bool isLeapYear(int year)
{
	if (year % 4 == 0) // step 1
	{
		if (year % 100 == 0) // step 2
		{
			if (year % 400 == 0) // step 3
			{
				return true; // step 4
			}
		}
		else return true; // step 4
	}
	else return false; // step 5



	return false;
}

int Reversed(int testNumber)
{
	int reverseNum = 0;

	while (testNumber > 0)
	{
		reverseNum *= 10;				// move the digits from testNumber one position to the left
		reverseNum += testNumber % 10;	// get just the last digit in testNumber and add it to the temporary variable
		testNumber /= 10;				// remove last digit from testNumber to reach 0 eventually
	}
	return reverseNum;
}
bool isAPalindrome(int testNumber)
{
	int reverseNum = 0;
	int tempTestNum = testNumber;	// to use testNumber without changing the original input

	while (tempTestNum > 0)
	{
		reverseNum *= 10;				// move the digits from testNumber one position to the left
		reverseNum += tempTestNum % 10;	// get just the last digit in testNumber and add it to the temporary variable
		tempTestNum /= 10;				// remove last digit from testNumber to reach 0 eventually
	}
	
	if (reverseNum == testNumber)
	{
		return true;
	}

	return false;
}
bool isAPrimeNumber(int numbertoTest)
{
	if (numbertoTest <= 1)
	{
		return false; // 1 is not a prime number; nor is 0 or any negative number
	}

	for (int i = 2; i < numbertoTest; i++) // if the number is divisible by numbers in this range, it is not a prime number
	{
		if (numbertoTest % i == 0)
		{
			return false;
		}
	}

	return true; // return true if no numbers divisible are found in the loop
}
int input5CharsConvertToInt(char t_array[], int size)
{
	int returnInt = 0;
	
	for (int i = 0; i < size; i++)
	{
		returnInt *= 10;				// shift the non-zero values one position to the left after returnInt is incremented
		returnInt += (t_array[i] - 48); // integer value for any digit character is minus '0', or -48
		
	}
	return returnInt;
}
int convertBinarytoDecimal(int binaryNumber)
{
	int tempNum = binaryNumber;
	int decimalNum = 0;
	int baseValue = 1; // base values of the binary number; 1, 2, 4, 8, etc.

	while (tempNum)
	{
		int lastDigit = tempNum % 10;

		tempNum = tempNum / 10;

		decimalNum += lastDigit * baseValue;

		baseValue = baseValue * 2;
	}

	return decimalNum;
}
void drawRightAngledTriangle()
{
	for (int row = 0; row < 3; row++)
	{
		std::cout << "A";
		std::cout << std::endl;

		for (int col = 0; col < row; col++)
		{
			std::cout << "A";

		}

		std::cout << "A";
	}

	std::cout << "A";
}
void drawIsocelesTriangle()
{
	int numA = 0; // track the amount of A's printed

	for (int row = 0; row < 8; row++)
	{

		if (row <= 4) 
		{
			numA = row; // from rows 0-4, number of A's to print matches the current row
		}
		else
		{
			numA = 7 - (row - 1); //from rows 5-7, number of A's to print is (maxRows minus currentRow)
		}


		for (int col = 0; col < numA; col++)
		{
			std::cout << "A";
		}
		std::cout << std::endl;
	}
}


int find(int toFind, int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == toFind)
		{
			return i;
		}
	}
	return -1;
}



int find2ndLargest(int size, int arr[])
{
	return -1;
}
void copyArraytoArray(int size, int arr1[], int arr2[])
{
	return;
}
bool insertElement(int& size, int& count, int arr[], int elementToInsert, int insertIndex)
{

	return false;
}
bool deleteElement(int& size, int& count, int arr[], int deleteIndex)
{

	return true;
}
int frequencyCount(int size, int arr[], int value)
{

	return 0;
}
int countDuplicates(int size, int arr[])
{

	return 0;
}
void reverse(int size, int arr[])
{
	return;
}
int rotateLeft(int size, int arr[])
{
	return -1;
}
bool twoMovies(int flightLength, int movieLengths[], int size)
{
	return false;
}
int wordCounter(int size, char characters[])
{
	return 0;
}
