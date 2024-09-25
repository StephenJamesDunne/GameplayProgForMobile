// Stephen Dunne
// C00194821

#pragma once

#include <iostream>

void FindAllVariables(char variables[1000], char code[1000])
{
	int codeArraySize = sizeof(code) / sizeof(code[0]);
	int varArrayIterator = 0;

	for (int codeIndex = 0; codeIndex < codeArraySize; codeIndex++)
	{
		if (code[codeIndex] == ' ' && code[codeIndex - 3] == 'i' && code[codeIndex - 2] == 'n' && code[codeIndex - 1 == 't'])
			// if current element is a space, and the previous 3 elements are 'int'
		{
			
		}
	}
}
void FindAllVariablesInScope(char variables[1000], char code[1000], int lineNumber)
{

}