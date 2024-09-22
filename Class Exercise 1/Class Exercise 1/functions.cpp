// Stephen Dunne
// C00194821



#include "functions.h"
// Test for Questions 1 to 8
int main()
{
	std::cout << "Leapyear" << std::endl;
	std::cout << "1700: ";
	if (!isLeapYear(1700))
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}
	std::cout << "1600: ";
	if (isLeapYear(1600))
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}
	std::cout << "2016: ";
	if (isLeapYear(2016))
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}
	std::cout << "-----------------------" << std::endl;
	std::cout << "NumberReversed" << std::endl;
	if (Reversed(123) == 321)
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}

	if (Reversed(1) == 1)
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}
	if (Reversed(1234) != 321)
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}
	std::cout << "-----------------------" << std::endl;
	std::cout << "Palindrome" << std::endl;
	std::cout << "1: ";
	if (isAPalindrome(1))
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}
	std::cout << "121: ";
	if (isAPalindrome(121))
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}
	std::cout << "1213: ";
	if (isAPalindrome(1213))
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}
	//std::cout << "-----------------------" << std::endl;
	//std::cout << "Prime Number" << std::endl;
	//std::cout << "3: ";
	//if (isAPrimeNumber(3))
	//{
	//	std::cout << "yes" << std::endl;
	//}
	//else {
	//	std::cout << "no" << std::endl;
	//}
	//std::cout << "2147483647: ";
	//if (isAPrimeNumber(2147483647))
	//{
	//	std::cout << "yes" << std::endl;
	//}
	//else {
	//	std::cout << "no" << std::endl;
	//}
	//std::cout << "4: ";
	//if (isAPrimeNumber(4))
	//{
	//	std::cout << "yes" << std::endl;
	//}
	//else {
	//	std::cout << "no" << std::endl;
	//}
	//std::cout << "-----------------------" << std::endl;
	//std::cout << "Binary to Decimal" << std::endl;
	//std::cout << "110 in Binary is 6: ";
	//if (convertBinarytoDecimal(110) == 6)
	//{
	//	std::cout << "yes" << std::endl;
	//}
	//else {
	//	std::cout << "no" << std::endl;
	//}
	//std::cout << "111 in Binary is 7: ";
	//if (convertBinarytoDecimal(111) == 7)
	//{
	//	std::cout << "yes" << std::endl;
	//}
	//else {
	//	std::cout << "no" << std::endl;
	//}
	//std::cout << "-----------------------" << std::endl;


	//std::cout << "5 chars to int" << std::endl;

	//char charArray[5]{};
	//int convertedInt;
	//std::cout << "Enter 5 characters 0-9: ";

	//for (int i = 0; i < 5; i++) // first loop to fill the array with the characters given by the user
	//{
	//	std::cin >> charArray[i];
	//}

	//for (int i = 0; i < 5; i++) // second loop to check if any of the inputted characters are not digits
	//{
	//	if (!isdigit(charArray[i]))
	//	{
	//		convertedInt = 0;
	//		break;	// exit if/else and loop if a non-digit is found and leave convertedInt = 0
	//	}
	//	else
	//	{
	//		convertedInt = input5CharsConvertToInt(charArray, 5); // call function if all characters are digits
	//	}
	//}

	//std::cout << convertedInt << std::endl;


	std::cout << "-----------------------" << std::endl;
	std::cout << "Triangles" << std::endl;
	drawRightAngledTriangle();
	std::cout << "\n" << std::endl;
	drawIsocelesTriangle();


	std::cout << "-----------------------" << std::endl;
	std::cout << "Q8: Find element in an array" << std::endl;
	int arr[] = { 1, 2, 3, 4, 5 };
	int size = 5;
	int toFind = 2;

	int index = find(toFind, arr, size);

	if (index != -1)
	{
		std::cout << "Number found at index: " << index << std::endl;
	}
	else
	{
		std::cout << "Number was not found. " << std::endl;
	}


	// 9.	Find and return the second largest element in an array of positive integer, returns -1 if it can’t find one. 
	//int find2ndLargest(int size, int arr[])
	//{
	//	return -1;
	//}

	std::cout << "-----------------------" << std::endl;
	std::cout << "Q9: Find 2nd largest element in an array\n" << std::endl;


	int arr2[] = { 5, 7, 1, 3, 7, 8, 9, 5 };
	int size2 = 8;
	int secondLargest = find2ndLargest(size2, arr2);

	std::cout << "Second largest element in the array: " << secondLargest << std::endl;


	std::cout << "-----------------------" << std::endl;
	std::cout << "Q10: Copy array 1 to array 2\n" << std::endl;

	const int copySize = 4;
	int copyarr1[copySize] = { 1, 2, 3, 4 }; // defined size and values
	int copyarr2[copySize]{};				  // defined size, no pretermined values

	copyArraytoArray(copySize, copyarr1, copyarr2);

	std::cout << "Elements copied to array2: " << std::endl;
	for (int i = 0; i < copySize; i++)
	{
		std::cout << copyarr2[i] << " ";
	}
	std::cout << std::endl;

	std::cout << "-----------------------" << std::endl;
	std::cout << "Q11: Insert an element into an array at a specified position\n" << std::endl;

	const int arraySize = 15;
	int elevenArray[arraySize] = { 1, 2, 3, 4, 5 };
	int elevenCount = 5;
	int elementToInsert = 67;
	int insertIndex = 2;

	bool inserted = insertElement(arraySize, elevenCount, elevenArray, elementToInsert, insertIndex);

	if (inserted)
	{
		elevenCount++; // elements in the array increased by 1
		std::cout << elementToInsert << " inserted at position " << insertIndex << ". New arrangement of array: \n";
		for (int i = 0; i < elevenCount; i++)
		{
			std::cout << elevenArray[i] << " ";
		}
	}
	else
	{
		std::cout << "Array is full; element could not be inserted. ";
	}
	std::cout << std::endl;

	std::cout << "-----------------------" << std::endl;
	std::cout << "Q12: Delete an element from an array\n" << std::endl;
 
	int twelveArr[] = { 1, 2, 3, 4, 5 };
	int twelveSize = sizeof(twelveArr) / sizeof(twelveArr[0]);
	int twelveDeleteIndex = 2;


	std::cout << "Elements in array before deletion: ";
	for (int i = 0; i < twelveSize; i++)
	{
		std::cout << twelveArr[i] << " ";
	}
	std::cout << std::endl;


	bool deleted = deleteElement(twelveSize, twelveArr, twelveDeleteIndex);

	if (deleted)
	{
		std::cout << "Elements in array after deletion: ";
		for (int i = 0; i < twelveSize; i++)
		{
			std::cout << twelveArr[i] << " ";
		}
		std::cout << std::endl;
	}
	else
	{
		std::cout << "Invalid index, cannot delete element. \n";
	}

	std::cout << "-----------------------" << std::endl;
	std::cout << "Q13: Count the frequency of en element in an array \n " << std::endl;

	int thirteenArray[] = { 1, 2, 2, 4, 2, 5, 2 };
	int thirteenSize = sizeof(thirteenArray) / sizeof(thirteenArray[0]);
	int thirteenValue = 2;

	std::cout << "Elements in array: ";
	for (int i = 0; i < thirteenSize; i++)
	{
		std::cout << thirteenArray[i] << " ";
	}
	std::cout << std::endl;

	int thirteenCount = frequencyCount(thirteenSize, thirteenArray, thirteenValue);

	std::cout << "Value " << thirteenValue << " found in array " << thirteenCount << " times. " << std::endl;


	std::cout << "-----------------------" << std::endl;
	std::cout << "Q14: Count duplicates in an array \n" << std::endl;

	int fourteenArr[] = { 4, 2, 4, 5, 6, 2, 7, 8, 8, 7, 2, 2, 5 };
	int fourteenSize = sizeof(fourteenArr) / sizeof(fourteenArr[0]);

	for (int i = 0; i < fourteenSize; i++)
	{
		std::cout << fourteenArr[i] << " ";
	}
	std::cout << std::endl;

	int dupes = countDuplicates(fourteenSize, fourteenArr);


	std::cout << "-----------------------" << std::endl;
	std::cout << "Q15: Find reverse of an array  \n" << std::endl;

	int fifteenArr[] = {7, 6, 5, 4, 3, 2, 1 };
	int fifteenSize = sizeof(fifteenArr) / sizeof(fifteenArr[0]);

	std::cout << "Original array: ";
	for (int i = 0; i < fifteenSize; i++)
	{
		std::cout << fifteenArr[i] << " ";
	}
	std::cout << std::endl;
	reverse(fifteenSize, fifteenArr);
	std::cout << "Reversed array: ";
	for (int i = 0; i < fifteenSize; i++)
	{
		std::cout << fifteenArr[i] << " ";
	}
	std::cout << std::endl;
	


	std::cout << "-----------------------" << std::endl;
	std::cout << "Q16: Left rotate an array by one position \n" << std::endl;

	int sixteenArr[] = { 6, 1, 2, 3, 4, 5 };
	int sixteenSize = sizeof(sixteenArr) / sizeof(sixteenArr[0]);

	std::cout << "Original array: ";
	for (int i = 0; i < sixteenSize; i++)
	{
		std::cout << sixteenArr[i] << " ";
	}
	std::cout << std::endl;
	rotateLeft(sixteenSize, sixteenArr);
	std::cout << "Rotated array: ";
	for (int i = 0; i < sixteenSize; i++)
	{
		std::cout << sixteenArr[i] << " ";
	}
	std::cout << std::endl;

	std::cin.get();
}