/*
 * multilevel_ inheritance.cpp
 *
 *  Created on: Aug 1, 2022
 *      Author: ssingh42
 */

/**
 * POINTS:
	1. A derived class with multiple base class is called multiple inheritance.
	2. There is an ambiguity problem in multiple inheritance.
 */


#include <iostream>
using namespace std;

class Vehicle {
};

class Audi: public Vehicle{
};

class Car: public Audi{
};


