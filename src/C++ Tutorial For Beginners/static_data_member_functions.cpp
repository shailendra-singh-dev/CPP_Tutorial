/*
 * static_data_member_functions.cpp
 *
 *  Created on: 13-Jul-2022
 *      Author: swati
 */

#include <iostream>
using namespace std;


/**
 * NOTES:
	1. We can define class members static using "static" keyword.
	2. it can access only static data members. (non-static data member can be accessed but we have to pass the object inside function)
	3. it can access private data of class.
 */
class DataMember {
public:
	int a;
	static int b;
	void print() {
		cout << "a:" << a << endl;
	}

	static void printStatic() {
		cout << "b:" << b << endl;
	}
};

int DataMember::b = 100;

void static_data_member_functions_main() {
	DataMember member;
	member.a = 10;
	DataMember::b = 200;

	DataMember member2;
	member2.a = 20;
	DataMember::b = 300;

	member.print();
	DataMember::printStatic();


	member2.print();
	DataMember::printStatic();

}
