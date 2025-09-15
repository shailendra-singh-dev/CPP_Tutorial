//============================================================================
// Name        : Overloading.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "Person.h"
#include <iostream>


using namespace std;
using namespace Overloading_Constructors;

int Overloading_Constructors_main() {
	//Default constructor
	Person person;
	cout << "Info " << person.toString() << endl;

	//Overloaded constructor
	Person person1("person1");
	cout << "Info " << person1.toString() << endl;

	Person person2("person2", 44);
	cout << "Info " << person2.toString() << endl;

	return 0;
}
