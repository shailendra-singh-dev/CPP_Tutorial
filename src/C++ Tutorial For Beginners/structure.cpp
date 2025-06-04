/*
 * structure.cpp
 *
 *  Created on: Jul 22, 2022
 *      Author: ssingh42
 */

#include <iostream>
using namespace std;

/**
 * NOTES:
  1. Structure in c++ is similar with class in c++, except by default access specifier in classes is private but public in structure.
 */

// ‘int A::x’ is private within this context
class A {
	int x;
};

// ‘int B::x’ is public within this context
struct B {
	int x;
};


// By default Inheritance is private until we add public.
class A1: A {
	A1() {
		//cout << this->x << endl;
	}
};

// By default Inheritance is public.
struct B1: B {
	B1(){
		cout << this->x << endl;
	}
};


void structure_main() {
	A a;
	//cout << a.x << endl;
	B b;
	cout << b.x << endl;

	//‘A1::A1()’ is private within this context
	//A1 a1;

}

