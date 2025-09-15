//============================================================================
// Name        : break-continue.cpp
// Author      : Shailendra
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int break_continue_main() {
	const string fixed = "Hello";
	string value;
	do {
		cout << "Enter value " << endl;
		cin >> value;
		if (value == fixed) {
			cout << "Access available" << endl;
			break;
		} else {
			cout << "Access denied" << endl;
		}
	} while (true);
	return 0;
}
