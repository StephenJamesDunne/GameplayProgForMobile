// Stephen Dunne
// C00194821

#pragma once

#include <iostream>

void FindAllVariables(char variables[1000], char code[1000])
{
	int codeArraySize = 1000;
	int varArrayIterator = 0;

	for (int codeIndex = varArrayIterator; codeIndex < codeArraySize; codeIndex++)
	{
		if (code[codeIndex] == '=') // found a variable declaration
		{
			for (int variableIndex = codeIndex; variableIndex > 0; variableIndex--) // start from '='
			{
				if (code[variableIndex] == 't' && code[variableIndex - 1] == 'n' && code[variableIndex - 2] == 'i' && code[variableIndex + 6] != '(') // find 'int' but not 'int main'
				{
					for (int variableNameIndex = variableIndex + 2; code[variableNameIndex] != ' '; variableNameIndex++) // start from variable name, end at next space
					{
						variables[varArrayIterator] = code[variableNameIndex]; // assign each character in variable name to the new array, starting at element[0]
						varArrayIterator++; // increment the iterator
					}
				}
			}
		}
	}

	for (int i = 0; i < codeArraySize; i++)
	{
		std::cout << variables[i];
	}
}
void FindAllVariablesInScope(char variables[1000], char code[1000], int lineNumber)
{

}