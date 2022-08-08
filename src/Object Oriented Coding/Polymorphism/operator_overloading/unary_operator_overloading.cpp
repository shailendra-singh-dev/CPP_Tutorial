/*
 * unary_operator_overloading.cpp
 *
 *  Created on: Jul 23, 2022
 *      Author: ssingh42
 */

#include <iostream>
using namespace std;

/**
 * There are few operators called Unary operators and they can be overloaded. This video explains the same.
	Unary Operators:
	+, -, ++, --, !, ~
 */

class Point {
private:
	int x;
	int y;
public:
	Point(int x=0, int y=0):x(x),y(y){
	}

	Point operator -(){
		Point obj(-x,-y);
		return obj;
	}
	void print(){
		cout << "x:" << x << ",y:" << y << endl;
	}
};

void unary_operator_overloading_main(){
	Point p(10,10),p1;
	p1 = -p;
	p1.print();
}

