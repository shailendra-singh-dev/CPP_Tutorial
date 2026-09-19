//============================================================================
// Name        : Strings.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int Strings_main() {
	string text1 = "text1";
	string text2 = "text2";
	string text3 = text1 + text2;
	cout << "text1" << text1 << "text2"<< text2 << endl;
	cout << "text3" << text3 << endl;

	text1.append("text4");
	text1.append("text5");
	cout << text1 << endl;

	return 0;
}
