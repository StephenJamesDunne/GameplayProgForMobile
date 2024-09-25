//Stephen Dunne 
// C00194821


#include "lab3.h"


int main()
{

	char code[1000] = "int main() \n { \n int num1 = 5;\n int num2 = 7;\n if (num1 < 10) \n  {\n int num3 = 4;\n} \n} \n";

	char variables[1000] = "";

	FindAllVariables(variables, code);





	FindAllVariablesInScope(variables, code, 12);


}