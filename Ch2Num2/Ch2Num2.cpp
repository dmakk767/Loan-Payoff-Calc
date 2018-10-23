// Ch2Num2.cpp : Defines the entry point for the console application.
//
/*
 */
#include "stdafx.h"
#include <iostream>
//#include <cstdlib>
using namespace std;

int main()
{
	//set up the constants 
	const double debt = 1000;
	const double payment = 50;
	const double interestRate = .015;
	//set variables to use'
	int month = 0;
	double interestPayment;
	double totalInterest = 0;
	double debtCurrent = debt;

	for (debtCurrent; debtCurrent > 0; month++)
	{
		//do calc
		interestPayment = debtCurrent * interestRate;
		totalInterest = totalInterest + interestPayment;
		debtCurrent = debtCurrent - (payment - interestPayment);

			//test the loop with some output
		/*
			cout << "month            " << month << endl;
			cout << "interest payment " << interestPayment << endl;
			cout << "Total interest   " << totalInterest << endl;
			cout << "remaining debt   " << debtCurrent << endl;
			*/
	}


	cout << "It will take " << month << " months to pay off your debt." << endl;
	cout << "You will have paid $" << totalInterest << " in total interest over that time." << endl;
	getchar();
    return 0;
}

