/*
 * pure_virtual_function.cpp
 *
 *  Created on: 17-Apr-2022
 *      Author: swati
 */

#include <iostream>

using namespace std;

class AnimalBase {
public:
	virtual void move() =0;
};

void AnimalBase::move() {
	cout << "AnimalBase moving " << endl;
}

class Snake: public AnimalBase {
public:
	void move() {
		cout << "Snake can move in rectilinear locomotion" << endl;
	}
};

class Cow: public AnimalBase {
public:
	void move() {
		cout << "Cow can walk and run." << endl;
	}
};

void pure_virtual_function_main() {
	//AnimalBase* base = new AnimalBase();
	AnimalBase *obj1 = new Snake();
	obj1->move();

	AnimalBase *obj2 = new Cow();
	obj2->move();
}
