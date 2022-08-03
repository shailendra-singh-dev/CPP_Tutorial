/*
 * overload_typecast.cpp
 *
 *  Created on: Jul 27, 2022
 *      Author: ssingh42
 */

#include <iostream>
using namespace std;

/**
 * POINTS:
	1. There is no need to typecast implicit data types (Compile Knows How To Do That)
	2. User defined data types needs this overloading.
 */

class Rupee {
private:
	int x;
public:
	Rupee(int x=0) :x(x) {
	}
	void print() {
		cout << x << endl;
	}
};


class Dollar {
private:
	int x;
public:
	Dollar(int x) :	x(x) {
	}

	void print() {
		cout << x << endl;
	}

	operator Rupee(){
		return Rupee(x*71.5);
	}
};


void overload_typecast_main(){
	Dollar d(10);
	Rupee r;
	r = d;
	r.print();
	d.print();
}

