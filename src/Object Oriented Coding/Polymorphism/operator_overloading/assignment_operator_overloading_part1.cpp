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

class Test {
private:
	int* x;
public:
	Test() {
		x = new int(100);
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
};

void assignment_operator_overloading_part1_main() {
	Test test1;
	test1.setX(200);
	cout << test1.getX() << endl;

	Test test2;
	test2.setX(300);
	cout << test2.getX() << endl;

	test2= test1;
	cout << test2.getX() << endl;
}

