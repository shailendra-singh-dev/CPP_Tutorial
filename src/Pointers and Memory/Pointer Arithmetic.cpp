//============================================================================
// Name        : Pointer.cpp
// Author      : Shailendra
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int Pointer_Arithmetic_main() {
	const int NUMBER_STRINGS = 5;
	string texts[NUMBER_STRINGS] = { "one", "two", "three", "four", "five" };
	string* pTexts = texts;// &texts[0];
	cout << *pTexts << endl;
	cout << *(pTexts + 2) << endl;
	pTexts = texts;
	string* pEnd = &texts[NUMBER_STRINGS];
	while (pTexts != pEnd) {
		cout << *pTexts << " " << flush;
		pTexts++;
	}
	cout << "" << endl;

	pTexts = texts;
	cout << "Base address OR 0th element address is :" << pTexts << endl;
	cout << "End element address is:" << pEnd << endl;
	cout << "Difference b/w Base address and End element address is: " << pEnd
			- pTexts << endl;

	pTexts += NUMBER_STRINGS / 2;
	cout << *pTexts << endl;

	return 0;
}
