/*
 * Person.cpp
 *
 *  Created on: Feb 23, 2018
 *      Author: SS8468
 */

#include "Person.h"

#include <iostream>

using namespace std;

string Getters_And_Setters::Person::toString() {
	return "Person name is " + name;
}

string Getters_And_Setters::Person::getName() {
	return name;
}

void Getters_And_Setters::Person::setName(string newName) {
	name = newName;
}
