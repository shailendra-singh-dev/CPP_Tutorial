//============================================================================
// Name        : Floating.cpp
// Author      : Shailendra
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>

using namespace std;

int Floating_Point_Types_main() {
	float fValue = 100.2020;
	cout << "sizeof(fValue) " << sizeof(fValue) << flush;
	cout << " setprecision(20) " << setprecision(20) << fixed << fValue << endl;

	double dValue = 787.2020;
	cout << "sizeof(dValue) " << sizeof(dValue) << flush;
	cout << " setprecision(20) " << setprecision(20) << fixed << dValue << endl;

	long double ldValue = 99.9090;
	cout << "sizeof(ldValue) " << sizeof(ldValue) << flush;
	cout << " setprecision(20) " << setprecision(20) << fixed << ldValue << endl;

	return 0;
}
