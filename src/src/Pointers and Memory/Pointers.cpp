//============================================================================
// Name        : Pointers.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void manipulate(double value) {
	cout << "2.Value in manipulate():" << value << endl;
	value = 10.0;
	cout << "3.Value in manipulate():" << value << endl;
}

void manipulate(double* pValue) {
	cout << "5.Value in manipulate():" << *pValue << endl;
	*pValue = 10.0;
	cout << "6.Value in manipulate():" << *pValue << endl;
}

int Pointers_main() {
	double dValue = 133.22;
	cout << "1.Value in main():" << dValue << endl;
	manipulate(dValue);
	cout << "4.Value in main():" << dValue << endl;

	double* pDValue = &dValue;
	manipulate(pDValue);
	cout << "7.Value in main():" << *pDValue << endl;

	return 0;
}
