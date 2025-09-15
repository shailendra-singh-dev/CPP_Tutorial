/*
 * Person.cpp
 *
 *  Created on: Feb 26, 2018
 *      Author: SS8468
 */

#include "Person.h"
#include <sstream>

Constructor_Initialization_Lists::Person::Person() :	name("Undefined"), age(0) {
}

Constructor_Initialization_Lists::Person::Person(string name) :	name(name), age(40) {
}

Constructor_Initialization_Lists::Person::Person(string name, int age) :	name(name), age(age) {
}

string Constructor_Initialization_Lists::Person::toString() {
	stringstream ss;
	ss << "[Name:" << name << ",Age:" << age << "]";
	return ss.str();
}

Constructor_Initialization_Lists::Person::~Person() {
}
