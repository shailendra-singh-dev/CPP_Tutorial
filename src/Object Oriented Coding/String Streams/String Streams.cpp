//============================================================================
// Name        : String.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <sstream>

using namespace std;

int String_Streams_main() {
	string name = "Shailendra";
	int age = 30;

	stringstream ss;
	ss << "Name is:" << name;
	ss << " Age is:" << age;
	string info = ss.str();
	cout << "!!! Info is !!!" << endl;
	cout << info << endl;
	return 0;
}
