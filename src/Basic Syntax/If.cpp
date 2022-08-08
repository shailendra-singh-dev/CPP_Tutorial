//============================================================================
// Name        : If.cpp
// Author      : Shailendra
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int If_main() {
	cout << "!Enter the password!!!" << endl; // prints !!!Hello World!!!
	string defaultPassword= "1234";
	string password;
	cin >> password;
	if(defaultPassword == password){
		cout << "! Correct password!!!" << endl;
	}
	return 0;
}
