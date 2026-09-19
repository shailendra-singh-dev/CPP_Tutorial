/*
 * Animal.cpp
 *
 *  Created on: Mar 31, 2018
 *      Author: Shailendra
 */

#include "animal.h"

Animal::Animal() {
	cout << "Constructor called" << endl;
}

Animal::~Animal() {
	cout << "Destructor called" << endl;
}

Animal::Animal(const Animal& otherAnimal):name(otherAnimal.name) {
	cout << "Copy Constructor called" << endl;
}

void Animal::setName(string newName) {
	this->name = newName;
}

void Animal::speak() {
	cout << "My name is:" << this->name << endl;
}

