/*
 * Person.cpp
 *
 *  Created on: Feb 26, 2018
 *      Author: SS8468
 */

#include "Person.h"
#include <sstream>

Overloading_Constructors::Person::Person() {
	name = "Unknown";
	age = 40;
}

Overloading_Constructors::Person::Person(string newName) {
	name = newName;
	age = 40;
}

Overloading_Constructors::Person::Person(string newName, int newAge) {
	name = newName;
	age = newAge;
}

string Overloading_Constructors::Person::toString() {
	stringstream ss;
	ss << "[Name:" << name << ",Age:" << age << "]";
	return ss.str();
}

Overloading_Constructors::Person::~Person() {
	name = "";
	age = 0;
}
