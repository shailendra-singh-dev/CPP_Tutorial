/*
 * Person.cpp
 *
 *  Created on: Feb 26, 2018
 *      Author: SS8468
 */

#include "Person.h"

The_This_Keyword::Person::Person() {
	this -> name = "Undefined";
	this -> age = 60;
	cout << "Address of object :" << this << " in Person() " << endl;
}

The_This_Keyword::Person::Person(string name) {
	this -> name = name;
	this -> age = 0;
	cout << "Address of object :" << this << " in Person(string name) " << endl;
}

The_This_Keyword::Person::Person(string name, int age) {
	this -> name = name;
	this ->age = age;
	cout << "Address of object :" << this << " in Person(string name, int age) " << endl;
}

The_This_Keyword::Person::~Person() {
	this -> name = "";
	this -> age = 0;
}
