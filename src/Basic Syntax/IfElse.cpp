//============================================================================
// Name        : IfElse.cpp
// Author      : Shailendra
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int IfElse_main() {
	cout << "!!!1. Add record!!!" << endl;
	cout << "!!!2. Delete record!!!" << endl;
	cout << "!!!3. View records!!!" << endl;
	cout << "!!!4. Search record!!!" << endl;
	cout << "!!!5. Quit!!!" << endl;

	cout << "!!!Enter input!!!" << endl;

	int input;
	cin >> input;

	if (input < 3) {
		cout << "!!! Insufficient privilage to use menu !!!" << endl;
	} else {
		cout << "!!! Sufficient privilage given !!!" << endl;
	}
	if (input == 5) {
		cout << "!!! Quitting !!!" << endl;
	} else {
		cout << "!!! Not quitting !!!" << endl;
	}

	return 0;
}
