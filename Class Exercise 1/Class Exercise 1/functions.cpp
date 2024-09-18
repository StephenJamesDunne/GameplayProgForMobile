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
	std::cout << "-----------------------" << std::endl;
	std::cout << "Prime Number" << std::endl;
	std::cout << "3: ";
	if (isAPrimeNumber(3))
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}
	std::cout << "2147483647: ";
	if (isAPrimeNumber(2147483647))
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}
	std::cout << "4: ";
	if (isAPrimeNumber(4))
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}
	std::cout << "-----------------------" << std::endl;
	std::cout << "Binary to Decimal" << std::endl;
	std::cout << "110 in Binary is 6: ";
	if (convertBinarytoDecimal(110) == 6)
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}
	std::cout << "111 in Binary is 7: ";
	if (convertBinarytoDecimal(111) == 7)
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}
	std::cout << "-----------------------" << std::endl;


	std::cout << "5 chars to int" << std::endl;

	char charArray[5]{};
	int convertedInt;
	std::cout << "Enter 5 characters 0-9: ";

	for (int i = 0; i < 5; i++) // first loop to fill the array with the characters given by the user
	{
		std::cin >> charArray[i];
	}

	for (int i = 0; i < 5; i++) // second loop to check if any of the inputted characters are not digits
	{
		if (!isdigit(charArray[i]))
		{
			convertedInt = 0;
			break;	// exit if/else and loop if a non-digit is found and leave convertedInt = 0
		}
		else
		{
			convertedInt = input5CharsConvertToInt(charArray, 5); // call function if all characters are digits
		}
	}

	std::cout << convertedInt << std::endl;


	//std::cout << "Triangles" << std::endl;
	//drawRightAngledTriangle();
	//drawIsocelesTriangle();

}