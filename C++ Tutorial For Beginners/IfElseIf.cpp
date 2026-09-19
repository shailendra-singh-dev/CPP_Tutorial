//============================================================================
// Name        : IfElseIf.cpp
// Author      : Shailendra
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int IfElseIf_main() {
	cout << "!!!1. Add record!!!" << endl;
	cout << "!!!2. Delete record!!!" << endl;
	cout << "!!!3. View records!!!" << endl;
	cout << "!!!4. Search record!!!" << endl;
	cout << "!!!5. Quit!!!" << endl;

	cout << "!!!Enter input!!!" << endl;

	int input;
	cin >> input;
	cout << "!!!Enter input!!!" << endl;

	if (input == 1) {
		cout << "!!! Add record!!!" << endl;
	} else if (input == 2) {
		cout << "!!! Delete record!!!" << endl;
	} else if (input == 3) {
		cout << "!!! View records!!!" << endl;
	} else if (input == 4) {
		cout << "!!! Search record!!!" << endl;
	} else {
		cout << "!!! Quit !!!" << endl;
	}
	return 0;
}
