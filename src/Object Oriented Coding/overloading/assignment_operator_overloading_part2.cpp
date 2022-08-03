/*
 * assignment_operator_overloading.cpp
 *
 *  Created on: Jul 24, 2022
 *      Author: ssingh42
 */

/**
 * https://www.youtube.com/watch?v=ieD3l--qgK4&list=PLk6CEY9XxSIAQ2vE_Jb4Dbmum7UfQrXgt&index=58
 *
 * POINTS:
 1. When should we write our own assignment operator in C++?
 2. This comes under binary operator overloading?
 3. When we need deep copy, assignment operator must be overloaded.
 4. We should also create own copy constructor when overloading assignment operator and vise versa.

 FUNCTION POINTS
 1. Check self assignment because it is dangerous (we will discuss).
 2. Assignment operator must be overloaded by a non-static member function only
 */

#include <iostream>
using namespace std;

class Base {
private:
	int x;
public:
	Base(int x) :
			x(x) {
	}
	void setX(int val) {
		x = val;
	}

	int getX() {
		return x;
	}
};

class Test {
private:
	int* x;
public:
	Test(int x) :
			x { new int(x) } {
		// x= new int(x)
	}

	Test() :
			x { new int(0) } {
		// x= new int(100)
	}

	~Test() {
		delete (x);
	}

	void setX(int val) {
		*x = val;
	}

	int getX() {
		return *x;
	}


	Test& operator =(Test& obj) {
		if (this != &obj) {
			*x = *obj.x;
		}
		return *this;
	}

	/*
	Test operator =(Test& obj) {
		if (this != &obj) {
			*x = *obj.x;
		}
		return *this;
	}
	*/

	Test& operator =(Base& base) {
		*x = base.getX();
		return *this;
	}

	Test(Test& test) {
		x = new int(*test.x);
	}
};



void assignment_operator_overloading_part2_main() {
	Test test1;
	test1.setX(200);
	cout << test1.getX() << endl;

	Test test2;
	test2.setX(300);
	cout << test2.getX() << endl;

	test2 = test1;
	cout << test2.getX() << endl;

	Base base(10);
	Test test;
	test = base;
	cout << test.getX() << endl;
	cout << base.getX() << endl;

	Test test3(50);
	Test test4, test5;
	(test4 = test5) = test3;
	cout << test3.getX() << endl;
	cout << test4.getX() << endl;
	cout << test5.getX() << endl;

}

