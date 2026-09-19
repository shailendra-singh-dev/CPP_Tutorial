//============================================================================
// Name        : The.cpp
// Author      : Shailendra
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "person.h"

using namespace std;

int The_New_Operator_main() {
	//Without pointer
	//	Person person("Shailendra");
	//	cout << person.toString() << endl;
	//With pointer
	//	Person* person = new Person;
	Person* person = new Person("Shailendra");
	cout << person->toString() << endl;
	//Pointer is address which gets stored in long primitive type.Hence size of Pointer is size of Long.
	cout << "sizeof(person): " << sizeof(person) << endl;
	delete person;

	return 0;
}
