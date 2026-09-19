/*
 * Cat.cpp
 *
 *  Created on: Feb 23, 2018
 *      Author: SS8468
 */

#include "Cat.h"
#include <iostream>

using namespace std;

void Data_Members::Cat::speak() {
	if (mood) {
		cout << "Meeeun !!" << endl;
	} else {
		cout << "Ssshhh !!" << endl;
	}
}

void Data_Members::Cat::makeHappy() {
	mood = true;
}

void Data_Members::Cat::makeSad() {
	mood = false;
}
