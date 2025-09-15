/*
 * multilevel_ inheritance.cpp
 *
 *  Created on: Aug 1, 2022
 *      Author: ssingh42
 */

/**
 * POINTS:
	1. If Derived class is again Derived into some another class then it is called multilevel inheritance.
	2. Remember: We only derive a class when we can satisfy IS-A relation with base class
 */


#include <iostream>
using namespace std;


// Example 1
class Vehicle {
};

class Audi: public Vehicle{
};

class Car: public Audi{
};

// Example 2
class Animal {
};

class Cat: public Animal{
};

class RussianBlue: public Audi{
};
