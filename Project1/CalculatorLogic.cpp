#include "CalculatorLogic.h"
#include <iostream>

using namespace std;

double Calculator::Calculate(double* x, char* _oper, double* y)
{
	//this function performs calculations

	switch (*_oper)
	{
	case'+':
		return *x + *y;
	case'-':
		return *x - *y;
	case'*':
		return *x * *y;
	case'/':
		return *x / *y;
	default:
		return 0.0;
	}
}

bool Calculator::EnterData(double* x, char* _oper, double* y)
{
	//this function protects against entering incorrect data

	if (!(cin >> *x))
	{
		cin.clear();
		while (cin.get() != '\n')
		{
			continue;
		}
		cout << "\nWrong data. Try again.\n\n";
		return false;
	}

	cin >> *_oper;
	if (*_oper != '+' && *_oper != '-' && *_oper != '*' && *_oper != '/')
	{
		while (cin.get() != '\n')
		{
			continue;
		}
		cout << "\nWrong data. Try again.\n\n";
		return false;
	}

	if (!(cin >> *y))
	{
		cin.clear();
		while (cin.get() != '\n')
		{
			continue;
		}
		cout << "\nWrong data. Try again.\n\n";
		return false;
	}

	if (*_oper == '/' && *y == 0)
	{
		cout << "\nDon`t divide by zero! Enter data again.\n\n";
		return false;
	}
	return true;
}
