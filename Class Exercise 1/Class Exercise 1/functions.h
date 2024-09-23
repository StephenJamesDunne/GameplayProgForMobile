// Stephen Dunne
// Lab 1 Questions
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
	int largest = -1;
	int secondLargest = -1;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] > largest) // if current iteration is greater than the largest number that's currently stored
		{
			secondLargest = largest; // largest number is now the second largest number
			largest = arr[i]; // store current iteration in largest variable
		}
		else if (arr[i] < largest && arr[i] > secondLargest) // if current iteration is bigger than secondLargest but still smaller than largest
		{
			secondLargest = arr[i]; // current iteration is then secondLargest number
		}
	}

	return secondLargest; // this will return -1 if no largest/2nd largest elements are found
}
void copyArraytoArray(int size, int arr1[], int arr2[])
{
	for (int i = 0; i < size; i++)
	{
		arr2[i] = arr1[i];
	}
	return;
}
bool insertElement(int size, int& count, int arr[], int elementToInsert, int insertIndex)
{
	if (count >= size)
	{
		return false;
	}
	else
	{
		for (int i = count - 1; i >= insertIndex; i--) // start at end of array and count down to insertIndex
		{
			arr[i + 1] = arr[i]; // shift the values to the right in the array up to the insertIndex
		}

		arr[insertIndex] = elementToInsert; // value at insertIndex is now the new element inserted
		return true;
	}




	return false;
}

bool deleteElement(int &size, int arr[], int deleteIndex)
{


	if (deleteIndex >= 0 && deleteIndex < size)
	{
		for (int i = deleteIndex; i < size; i++)
		{
			arr[i] = arr[i + 1];
		}
		size--;
		return true;
	}

	return false;
}

int frequencyCount(int size, int arr[], int value)
{
	int count = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] == value)
		{
			count++;
		}
	}

	return count;
}
int countDuplicates(int size, int arr[])
{
	bool alreadyCounted;
	int count;					// tracks amount of dupes of current element
	int totalDuplicates = 0;	// tracks total amount of dupes

	for (int i = 0; i < size; i++)
	{
		count = 1;				// reset the current count of dupes to 1
		alreadyCounted = false; // reset alreadyCounted to false at the top of every iteration

		// check if this element has already been counted as a duplicate
		for (int k = 0; k < i; k++)
		{
			if (arr[i] == arr[k])	
			{
				alreadyCounted = true;
				break;
			}
		}

		// begin a new iteration of the i loop if the current element has already been counted
		if (alreadyCounted)
		{
			continue;			
		}

		for (int j = i + 1; j < size; j++) // count occurrences of arr[i] in the rest of the array
		{
			if (arr[i] == arr[j])
			{
				count++; 
			}
		}

		if (count > 1)
		{
			std::cout << arr[i] << " appears " << count << " times" << std::endl;
			totalDuplicates += count - 1; // dupes = total times element appears - 1; if count > 1
		}
	}

	return totalDuplicates;
}
void reverse(int size, int arr[])
{
	int start = 0;
	int end = size - 1;
	int tempNum = 0;

	//for (int start = 0; start < end; start++)
	//{
	//	tempNum = start;
	//	arr[start] = arr[end];
	//	arr[end] = tempNum;
	//	end--;
	//}

	while (start < end)
	{
		tempNum = arr[start];
		arr[start] = arr[end];
		arr[end] = tempNum;
		start++;
		end--;
	}
}
void rotateLeft(int size, int arr[])
{
	int tempNum = arr[0];

	for (int i = 0; i < size - 1; i++) // size - 1 so the last position is temporarily there twice, and then replaced with arr[0]
	{
		arr[i] = arr[i + 1]; // assign each element 1 position to the left of itself
	}
	arr[size - 1] = tempNum; // value from start of initial array is assigned to the rightmost element
}
bool twoMovies(int flightLength, int movieLengths[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; i++)
		{
			if (movieLengths[i] + movieLengths[j] == flightLength)
			{
				std::cout << "Movies at elements " << i << " and " << j << " match flight length of: " << flightLength << std::endl;
				return true;
			}
			else
			{
				std::cout << "No two movies match the current flight length. " << std::endl;
			}
		}
	}

	return false;
}
int wordCounter(int size, char characters[])
{
	bool countingLetters = false; // track if we are between letters in different words or not
	int wordCount = 0;

	for (int i = 0; i < size; i++)
	{
		if ((characters[i] >= 'a' && characters[i] <= 'z') || (characters[i] >= 'A' && characters[i] <= 'Z')) // range of alphabetic characters
		{
			if (!countingLetters) // if not currently counting a word and the current element is a letter
			{
				wordCount++;
				countingLetters = true;
			}
		}
		else
		{
			countingLetters = false; // lands on a space, change counting letters to false so wordCount is not incorrectly incremented next iteration
		}
	}
	return wordCount;
}
