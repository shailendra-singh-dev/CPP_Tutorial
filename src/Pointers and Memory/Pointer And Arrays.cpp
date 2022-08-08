//============================================================================
// Name        : Pointer.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int Pointer_And_Arrays_main() {

	string texts[] = { "one", "two", "three" };

	string* pTexts = texts;
	int sizeOfArray = sizeof(texts) / sizeof(string);

//	for (int i = 0; i < sizeOfArray; i++) {
//		cout << texts[i] << " " << flush;
//	}
//
//	cout << endl;
//	for (int i = 0; i < sizeOfArray; i++) {
//		cout << pTexts[i] << " " << flush;
//	}
//
//	cout << endl;
//	for (int i = 0; i < sizeOfArray; i++) {
//		cout << *(pTexts++) << " " << flush;
//	}
//
//	cout << endl;
//	for (int i = 0; i < sizeOfArray; i++, pTexts++) {
//		cout << *pTexts << " " << flush;
//	}

	string* pElement = texts;
	string* pLastElement = &texts[2];

	while (true) {
		cout << "Element :" << *pElement << endl;
		if (pElement == pLastElement) {
			break;
		}
		pElement++;
	}

	return 0;
}
