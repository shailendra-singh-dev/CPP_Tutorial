//============================================================================
// Name        : Getters.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Person.h"

using namespace std;
using namespace Getters_And_Setters;

int Getters_And_Setters_main() {
	cout << "!! Programs starts !!" << endl;
	{
		Person person;
		person.setName("Shailendra");
		cout << person.toString() << " using toString" << endl;
		cout << "Person name is " << person.getName() << " using getName()"
				<< endl;
	}
	cout << "!! Programs ends !!" << endl;
	return 0;
}
