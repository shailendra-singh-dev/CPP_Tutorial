/*
 * single_inheritance.cpp
 *
 *  Created on: Aug 1, 2022
 *      Author: ssingh42
 */


/**
 * POINT:
	1. This is the most basic type of inheritance
	2. It requires only one base class and one derived class.
 */

#include <iostream>
using namespace std;

class Vehicle{
public :
	void drive(){
		cout << "Driving.." << endl;
	}
};


class Car : public Vehicle{
public :
	int getTires(){
		return 4;
	}
};


void single_inheritance_main(){
	Car c;
	c.drive();
	cout << c.getTires() << endl;
}
