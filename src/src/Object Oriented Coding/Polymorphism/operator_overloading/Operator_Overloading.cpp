//============================================================================
// Name        : Operator_Overloading.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/**
 * https://www.youtube.com/watch?v=DVMZPOt816E&list=PLk6CEY9XxSIAQ2vE_Jb4Dbmum7UfQrXgt&index=54
 */
#include <iostream>
using namespace std;

/**
 * NOTES:
	1. In C++ it is possible to change the behavior of operators. (+,-,*....)
	2. But we can change the behavior for user defined types (class, struct) only.
 */

class Complex {
public:
private:
	int real;
	int img;

public:

	//Default , Parameterized constructor.
	Complex(int r = 0, int i = 0) {
		real = r;
		img = i;
	}

	void print() {
		cout << "real:" << real << ", img:" << img << endl;
	}

	Complex operator+(const Complex& obj) {
		Complex complex;
		complex.real = real + obj.real;
		complex.img = img + obj.img;
		return complex;
	}

	Complex operator-(const Complex& obj) {
		Complex complex;
		complex.real = real - obj.real;
		complex.img = img - obj.img;
		return complex;
	}

	Complex operator *(const Complex& obj) {
		Complex complex;
		complex.real = real * obj.real;
		complex.img = img * obj.img;
		return complex;
	}

	Complex operator/(const Complex& obj) {
		Complex complex;
		complex.real = real / obj.real;
		complex.img = img / obj.img;
		return complex;
	}

	bool operator ==(const Complex& obj) {
		return real == obj.real && img == obj.img;
	}

	bool operator !=(const Complex& obj) {
		return real != obj.real && img != obj.img;
	}

	int operator <<(const Complex& obj) {
		return real << obj.real || img << obj.img;
	}

	int operator >>(const Complex& obj) {
		return real >> obj.real || img >> obj.img;
	}

	int operator &(const Complex& obj) {
		return real & obj.real || img & obj.img;
	}

	int operator |(const Complex& obj) {
		return real | obj.real || img | obj.img;
	}

	// Can be implemented as a Friend function
	friend int operator ^(const Complex& obj1, const Complex& obj2);

	// Conversion operator . Syntax is operator Return_Type () { //implementation }
	operator float() {
		return real / img;
	}

	~Complex() {
	}

};

int operator ^(const Complex& obj1, const Complex& obj2) {
	return obj1.real ^ obj2.real || obj1.img ^ obj2.img;
}

int Operator_Overloading_main() {
	Complex obj1(100, 100), obj2(200, 200);
	Complex complex1 = obj1 + obj2;
	complex1.print();

	Complex complex2 = obj1 - obj2;
	complex2.print();

	Complex complex3 = obj1 * obj2;
	complex3.print();

	Complex complex4 = obj1 / obj2;
	complex4.print();

	cout << "(obj1 == obj2)" << (obj1 == obj2) << endl;
	cout << "(obj1 != obj2)" << (obj1 != obj2) << endl;
	cout << "(obj1 << obj2)" << (obj1 << obj2) << endl;
	cout << "(obj1 >> obj2)" << (obj1 >> obj2) << endl;
	cout << "(obj1 & obj2)" << (obj1 & obj2) << endl;
	cout << "(obj1 | obj2)" << (obj1 | obj2) << endl;
	cout << "(obj1 ^ obj2)" << (obj1 ^ obj2) << endl;

	Complex obj(100, 200);
	float f = obj;
	cout << "Conversion Operator:" << f << endl;

	obj = 300;
	cout << "Implicit Conversion:";
	obj.print();

	return 0;
}
