//============================================================================
// Name        : while.cpp
// Author      : Shailendra
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int While_main() {
	int value;
	cin >> value;
	while (value < 10) {
		cout << "Value is " << value << endl;
		value++;
	}
	cout << "Quit" << endl;
	return 0;
}
