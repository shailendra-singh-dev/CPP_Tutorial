//============================================================================
// Name        : Char.cpp
// Author      : Shailendra
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int Char_Arrays_main() {
	char texts[] = "hello";
	for (int i = 0; i < sizeof(texts); i++) {
		cout << texts[i] << flush;
	}
	int k = 0;
	cout << "" << endl;
	while (true) {
		if (texts[k] == 0) {
			break;
		}
		cout << texts[k] << flush;
		k++;
	}
	return 0;
}
