/*
 * union.cpp
 *
 *  Created on: Jul 23, 2022
 *      Author: ssingh42
 */

#include <iostream>
using namespace std;

/**
 * Union same as Class, Structure. Only difference is memory will be shared b/w member variables.
 *
 * NOTES:
	1. Just like structures and classes a union is a user defined data type.
	2. In union, all members share the biggest same memory location.
	3. This is used to achieve polymorphic in C.

	Possible Usage?
	1. When we need only one value out of many that time we will use it. (Example: Square Class)
	2. Get the actual data in parts. (Example: int value, char bytes[4])
 */



union UnionClass {
	int width;
	int height;

public:
	UnionClass():width(0){
	}

	int getArea(int width, int height) {
		return width * height;
	}
};


union UnionClassB {
	char bytes[4];
	unsigned int value;

public:
	UnionClassB():value(0){
	}

	int getArea(int width, int height) {
		return width * height;
	}
};

void union_main() {
	UnionClass obj;
	obj.width =10;
	cout << obj.getArea(obj.width,obj.height) << endl;

	UnionClassB objb;
	objb.value = 2;
	cout << (int)objb.bytes[0]<< endl;
	cout << (int)objb.bytes[1]<< endl;
	cout << (int)objb.bytes[2]<< endl;
	cout << (int)objb.bytes[3]<< endl;
}


