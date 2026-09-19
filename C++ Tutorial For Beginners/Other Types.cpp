//============================================================================
// Name        : Other.cpp
// Author      : Shailendra
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int Other_Types_main() {
	bool bValue = 1000;
	cout << "bValue " << bValue << endl;

	char cValue = 55;
	cout << "sizeof(cValue) " << sizeof(cValue) << endl;
	cout << "cValue " << cValue << endl;
	cout << "(int)cValue " << (int) cValue << endl;

	char caValue = 'a';
	cout << "caValue " << (int) caValue << endl;


	/**
	 * It is used to represent characters which require more memory to represent them than a regular char
	 */
	wchar_t wchar_tValue = 55;
	cout << "sizeof(wchar_tValue) " << sizeof(wchar_tValue) << endl;
	cout << "wchar_tValue " << wchar_tValue << endl;
	cout << "(int)wchar_tValue " << (int) wchar_tValue << endl;

	return 0;
}
