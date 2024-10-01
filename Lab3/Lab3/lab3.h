// Stephen Dunne
// C00194821

#pragma once

#include <iostream>

void FindAllVariables(char variables[1000], char code[1000])
{
	int codeArraySize = 1000;
	int varArrayIterator = 0; // track which element of the variables array is currently being iterated

	for (int codeIndex = varArrayIterator; codeIndex < codeArraySize; codeIndex++) // loop through entire code array
	{
		if (code[codeIndex] == '=') // found a variable declaration
		{
			for (int variableIndex = codeIndex; variableIndex > 0; variableIndex--) // start from '='
			{
				if (code[variableIndex] == 't' 
					&& code[variableIndex - 1] == 'n' 
					&& code[variableIndex - 2] == 'i' 
					&& code[variableIndex + 6] != '(') // find 'int' but not 'int main'
				{
					for (int variableNameIndex = variableIndex + 2; code[variableNameIndex] != ' '; variableNameIndex++) // start from variable name, end at next space
					{
						variables[varArrayIterator] = code[variableNameIndex]; // assign each character in variable name to the new array, starting at element[0]
						varArrayIterator++; 
					}
					variables[varArrayIterator++] = ','; // comma separator between variables
					break;
				}
				else if (code[variableIndex] == 'r'
					&& code[variableIndex - 1] == 'a'
					&& code[variableIndex - 2] == 'h'
					&& code[variableIndex - 3] == 'c') // find 'char'
				{
					for (int variableNameIndex = variableIndex + 2; code[variableNameIndex] != ' '; variableNameIndex++) // start from variable name, end at next space
					{
						variables[varArrayIterator] = code[variableNameIndex]; // assign each character in variable name to the new array, starting at element[0]
						varArrayIterator++; 
					}
					variables[varArrayIterator++] = ','; // comma separator between variables
					break;
				}
			}
		}
	}

	if (varArrayIterator > 0) // if variablesArray is not empty
	{
		variables[varArrayIterator - 1] = '\0'; // null-terminate the array of characters - now a string
	}

	std::cout << variables << std::endl; // variables array is now null-terminated, so it can be printed like a string data type
}
void FindAllVariablesInScope(char variables[1000], char code[1000], int lineNumber)
{

}