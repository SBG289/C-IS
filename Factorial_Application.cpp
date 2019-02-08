// Factorial_Application.cpp : This file contains the 'main' function. Program execution begins and ends there.
// C++ Program to find the 

#include "pch.h"
#include <iostream>

using namespace std;

void factorial()
{
	int x, i;
	double f = 1;

		cout << "Input Factorial: ";
		cin >> x;
		cout << endl;
		f = x;

		while (x > 1)
		{
			x--;
			f = f * x;
		}

		cout << "Factorial is equal to: " << f << endl;
		cout << endl;
	
}

	int main()
	{

		char c;

		while (true)
		{
			factorial();

			cout << "Would you like to run the program again? y/n: ";
			cin >> c;
			cout << endl;

			if (c == 'n' || c == 'N' || c == '0') break;

			cout << endl << "====================================================" << endl << endl;
			
		}
		return 0;
	}
