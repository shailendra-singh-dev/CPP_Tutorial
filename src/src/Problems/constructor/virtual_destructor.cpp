/*
 * virtual_constructor.cpp
 *
 *  Created on: Aug 5, 2021
 *      Author: ShSingh
 */

#include <stdint.h>
#include "stdio.h"
#include <iostream>
using namespace std;

class Person {

};

class A {
public:
//	uint8_t mem = nullptr;
//	int mem[] = new int[2]{10,20};
	Person mem;

	A() {
		cout << "Contructor Class A" << endl;
//		mem = new uint8_t;
//		mem = new Person();
	}
	virtual void f() {
		cout << "Class A" << endl;
	}
	virtual ~A() {
		cout << "Destroyed Class A" << endl;
	}
};

class B: public A {
public:
	B() {
		cout << "Contructor Class B" << endl;
	}
	virtual void f() {
		cout << "Class B" << endl;
	}
    virtual ~B(){
		cout << "Destroyed Class B" << endl;
	}

};

void test_virtual_constructor() {
	cout << "A* a = new B();" <<endl;
	A* a = new B();
	cout << "a->f();" <<endl;
	a->f();
	cout << "B* b = new B();" <<endl;
	B* b = new B();
	cout << "delete a" <<endl;
	delete a;
	cout << "delete b" <<endl;
	delete b;
}
