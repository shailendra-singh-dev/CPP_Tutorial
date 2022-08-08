/*
 * polymorphism.cpp
 *
 *  Created on: Aug 3, 2022
 *      Author: ssingh42
 */

//https://www.youtube.com/watch?v=mv5_l4kuVho&list=PLk6CEY9XxSICITtoUG_mJIBShyIYpeaoi&index=8
/*
 * POINS:
 There are two types of Polymorphism
 A. Compile Time Polymorphism / Static Binding / Early Binding
 	 a. Function Overloading
 	 b. Operator Overloading
 B. Runtime Polymorphism / Dynamic Binding / Lazy Binding
 	 a. Function Overriding (Using virtual functions)
 */

#include <iostream>
using namespace std;

class Complex{
public:
	int x;
	int y;
	Complex(int x=0, int y=0):x{x}, y{y}{
	}
	Complex operator +(const Complex& obj){
		Complex complex;
		complex.x = obj.x;
		complex.y = obj.y;
		return complex;
	}

	void show(){
		cout << "x" << x << ",y:" << y << endl;
	}
};


namespace polymorphism {
class Base {
	int x;
	int y;
public:
	Base(int x = 0, int y = 0) :
			x(x), y(y) {
	}

	Base operator +(const Base& obj) {
		Base base;
		base.x = x + obj.x;
		base.y = y + obj.y;
		return base;
	}

	void print() {
		cout << x << "," << y << endl;
	}

	virtual void fun(int x) {
		cout << "Base fun(int x)" << endl;
	}
	virtual void fun(double x) {
		cout << "Base fun(double x)" << endl;
	}
};

class Derived: public Base {
public:
	void fun(int x) override {
		cout << "Derived fun(int x)" << endl;
	}
    void fun(double x) override {
			cout << "Derived fun(double x)" << endl;
	}
	~Derived() {
	}

};
}

void polymorphism_main() {
	Complex obj1(1,2);
	Complex obj2(10,20);
	Complex obj = obj1+ obj2;
	obj.show();

	polymorphism::Base b1(1, 2), b2(3, 4);
	polymorphism::Base b = b1 + b2;
	b.print();
	polymorphism::Base* d = new polymorphism::Derived();
	d->fun(10);
	d->fun(10.0);

	polymorphism::Derived derived;
	polymorphism::Base& base=derived;
	base.fun(10);

}

