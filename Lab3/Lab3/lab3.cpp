// Stephen Dunne 
// C00194821


#include "lab3.h"


int main()
{

	/*char code[1000] = "int returnTest() \n { \n } \n \n int main() \n { \n int num1 = 5;\n int num2 = 7;\n char CharacterCharIsACharacterTest = 'a';\n if (num1 < 10) \n  {\n int num3 = 4;\n} \n} \n";
	char variables[1000] = "";
	FindAllVariables(variables, code);*/


	char code[1000] = "int main()\n{\n int numElephants = 10; \n int var2 = 10; \n	if (var2 < 10)\n{\nint var3 = 20; \n}\n while (var2 < 0)\n {\n if (var2 == 10) \n {\n int var4; \n} \n	int num = 10; \n} \n int var5 = 10; \n}";
	char variables[1000] = "";
	FindAllVariablesInScope(variables, code, 14);

	std::cin.get();
}

//int main()
//{
//	int numElephants = 10;
//	int var2 = 10;
//	if (var2 < 10)
//	{
//		int var3 = 20;
//	}
//	while (var2 < 0)
//	{
//		if (var2 == 10)
//		{
//			int var4;
//		}
//		int num = 10;
//	}
//	int var5 = 10;
//}