//============================================================================
// Name        : Input.cpp
// Author      : Shailendra
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int User_Input_main() {
	cout << "enter your name " << flush;
	string inputName;
	cin >> inputName;
	cout << "your name is" << inputName << endl;

	cout << "enter a number " << flush;
	int inputNumber;
	cin >> inputNumber;
	cout << "Number is" << inputNumber << endl;

	return 0;
}
