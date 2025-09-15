/*
 * Animal.cpp
 *
 *  Created on: Mar 31, 2018
 *      Author: Shailendra
 */

#include "animal.h"

Allocating_Memory::Animal::Animal() {
	cout << "Constructor called" << endl;
}

Allocating_Memory::Animal::~Animal() {
	cout << "Destructor called" << endl;
}

Allocating_Memory::Animal::Animal(const Animal& otherAnimal):name(otherAnimal.name) {
	cout << "Copy Constructor called" << endl;
}

void Allocating_Memory::Animal::setName(string newName) {
	this->name = newName;
}

void Allocating_Memory::Animal::speak() {
	cout << "My name is:" << this->name << endl;
}

