//============================================================================
// Name        : Arithmatic.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int Arithmatic_main() {
	double dValue = (double) 7 / 2;
	cout << "dValue:" << dValue << endl;

	int iValue = 100;
	iValue += 20;
	cout << "iValue:" << iValue << endl;

	float fValue = 100.88f;
	iValue += 22;
	cout << "fValue:" << fValue << endl;

	double expresionDValue = 222 % (100 / 2) + (5 * 2) - 100;
	cout << "expresionDValue:" << expresionDValue << endl;

	return 0;
}
