/*
 * virtual_destructor.cpp
 *
 *  Created on: 17-Apr-2022
 *      Author: swati
 */

#include "iostream"

using namespace std;

class Base {
public:
	Base() {
		cout << "Base class constructor" << endl;
	}
	/**
	 * Without virtual destructor, there will be Derived class object leakage.
	 */
	virtual ~Base() {
		cout << "Base class destructor" << endl;
	}
};

class Derived: public Base {
public:
	Derived() {
		cout << "Derived class constructor" << endl;
	}
	~Derived() {
		cout << "Derived class destructor" << endl;
	}
};

void virtual_destructor_main() {
	Base* obj= new Derived();
	delete obj;
}

