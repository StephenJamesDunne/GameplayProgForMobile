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
					&& code[variableIndex - 2] == 'i') 
				{
					for (int variableNameIndex = variableIndex + 2; code[variableNameIndex] != ' ' 
						&& code[variableNameIndex] != '='
						&& code[variableNameIndex] != ';'; variableNameIndex++) // start from variable name, end at next space
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
					for (int variableNameIndex = variableIndex + 2; code[variableNameIndex] != ' '
						&& code[variableNameIndex] != '='
						&& code[variableNameIndex] != ';'; variableNameIndex++) // start from variable name, end at next space
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
	int codeArraySize = 1000;
	int noOfNewlines = 0;
	int lineToStart = 0;
	int varArrayIterator = 0;


	// find element in the code array corresponding to the lineNumber variable
	for (int codeIndex = 0; codeIndex < codeArraySize; codeIndex++) 
	{
		if (code[codeIndex] == '\n')
		{
			noOfNewlines++;
		}

		if (noOfNewlines == lineNumber)
		{
			lineToStart = codeIndex; // the lineNumber argument is now the end of the range for a loop
			break;
		}
	}

	for (lineToStart; lineToStart >= 0; lineToStart--) // start from lineNumber, count backwards through the code array up until the beginning of array
	{
		// found new scope block
		if (code[lineToStart] == '}') 
		{
			for (int inScope = lineToStart; inScope >= 0; inScope--)
			{
				if (code[inScope] == '{')
				{
					lineToStart = inScope; // start at this new line before storing variables in new array
					break;
				}
			}
		}
		else
		{
			if (code[lineToStart] == 't'
				&& code[lineToStart - 1] == 'n'
				&& code[lineToStart - 2] == 'i'
				&& code[lineToStart + 6] != '(')
			{
				for (int variableNameIndex = lineToStart + 2; code[variableNameIndex] != ' '
					&& code[variableNameIndex] != '='
					&& code[variableNameIndex] != ';'; variableNameIndex++) // start from variable name, end at next space
				{
					variables[varArrayIterator] = code[variableNameIndex]; // assign each character in variable name to the new array, starting at element[0]
					varArrayIterator++;
				}
				variables[varArrayIterator++] = ','; // comma separator between variables
			}
			else if (code[lineToStart] == 'r'
				&& code[lineToStart - 1] == 'a'
				&& code[lineToStart - 2] == 'h'
				&& code[lineToStart - 3] == 'c') // find 'char'
			{
				for (int variableNameIndex = lineToStart + 2; code[variableNameIndex] != ' '
					&& code[variableNameIndex] != '='
					&& code[variableNameIndex] != ';'; variableNameIndex++) // start from variable name, end at next space
				{
					variables[varArrayIterator] = code[variableNameIndex]; // assign each character in variable name to the new array, starting at element[0]
					varArrayIterator++;
				}
				variables[varArrayIterator++] = ','; // comma separator between variables
			}
		}
	}

	if (varArrayIterator > 0) // if variablesArray is not empty
	{
		variables[varArrayIterator - 1] = '\0'; // null-terminate the array of characters - now a string
	}

	std::cout << variables << std::endl;
}