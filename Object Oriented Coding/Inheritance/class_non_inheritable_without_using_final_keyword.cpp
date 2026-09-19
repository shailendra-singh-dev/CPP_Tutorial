/*
 * class_non_inheritable_without_using_final_keyword.cpp
 *
 *  Created on: Aug 3, 2022
 *      Author: ssingh42
 */


#include <iostream>
using namespace std;

/**
 * TOPIC: Make class non-inheritable without using final keyword in C++!

	REQUIREMENT:
	1. We need one class which will make our class as final class.
	Lets call that class Final class.

	SOLUTION:
	a. Make default constructor of Final class as private.
	b. Inherit Final class as virtual in our class which we want to make non-inheritable.
	c. Make our class as friend inside Final class. (so that only our class can call the constructor of Final class, not the derived class)
 *
 */


class Final{
private:
	Final(){
	}
	friend class Base;
};

class Base: virtual public Final{
public:
	Base(){
	}
};

class Derived: public Base{
};


void class_non_inheritable_without_using_final_keyword_main(){
	Base b;
	//Derived d; Not allowed
}

