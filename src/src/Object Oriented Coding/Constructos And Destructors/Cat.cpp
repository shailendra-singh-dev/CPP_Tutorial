/*
 * Cat.cpp
 *
 *  Created on: Feb 23, 2018
 *      Author: SS8468
 */

#include "Cat.h"
#include <iostream>

using namespace std;

void Constructos_And_Destructors::Cat::setIsHappy(bool flag) {
	isHappy = flag;
}

bool Constructos_And_Destructors::Cat::getIsHappy() {
	return isHappy;
}

void Constructos_And_Destructors::Cat::speak() {
	bool isHappy = getIsHappy();
	if (isHappy) {
		cout << "Meeeun !!!" << endl;
	} else {
		cout << "Sssshhhh !!!" << endl;
	}
}

Constructos_And_Destructors::Cat::Cat() {
	cout << "Creating Cat object !!!" << endl;
}

Constructos_And_Destructors::Cat::~Cat() {
	cout << "Destroying Cat object !!!" << endl;
}
