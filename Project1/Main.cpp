//simple calculator for two numbers and four operations

#include<iostream>
#include"CalculatorLogic.h"
#include"windows.h"

using namespace std;

int main()
{
	double a = 0.0;
	double b = 0.0;
	double result = 0.0;
	char oper = '+';

	while (true)
	{
		cout << "Calculator Console Aplication \n\n";
		cout << "Please enter the operation to perform. Format: a + b | a * b | a - b | a / b. End press Enter." << endl << endl;

		while (!(Calculator::EnterData(&a, &oper, &b)))
		{
			system("pause");
			system("cls");
			cout << "Calculator Console Aplication \n\n";
			cout << "Please enter the operation to perform. Format: a + b | a * b | a - b | a / b. End press Enter." << endl << endl;
		}
		result = Calculator::Calculate(&a, &oper, &b);
		cout << "\nResult is: " << result << endl << endl;
		system("pause");
		system("cls");
	}
	return 0;
}