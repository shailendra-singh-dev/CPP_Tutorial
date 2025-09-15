//============================================================================
// Name        : Integer.cpp
// Author      : Shailendra
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <limits.h>

using namespace std;

int Integer_Types_main() {
	int signedInt = -99090;
	cout << "signedInt " << signedInt << endl;

	unsigned int unsignedInt = 99090;
	cout << "unsignedInt " << unsignedInt << endl;

	cout << "INT_MIN value " << INT_MIN << endl;
	cout << "INT_MAX value " << INT_MAX << endl;

	long lValue = 99999;
	cout << "lValue " << lValue << endl;

	short sValue = 32768;
	cout << "sValue " << sValue << endl;

	cout << "sizeof(short) " << sizeof(short) << endl;
	cout << "sizeof(long) " << sizeof(long) << endl;

	return 0;
}
