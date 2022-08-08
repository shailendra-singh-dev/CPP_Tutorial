//============================================================================
// Name        : Constructor.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Person.h"

using namespace std;
using namespace Constructor_Initialization_Lists;

int Constructor_Initialization_Lists_main() {
	Person person;
	cout << "person Info:" << person.toString() << endl;

	Person person1("person1");
	cout << "person1 Info:" << person1.toString() << endl;

	Person person2("person2", 70);
	cout << "person2 Info:" << person2.toString() << endl;

	return 0;
}
