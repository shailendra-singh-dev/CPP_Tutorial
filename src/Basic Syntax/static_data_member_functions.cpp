/*
 * static_data_member_functions.cpp
 *
 *  Created on: 13-Jul-2022
 *      Author: swati
 */

#include <iostream>
using namespace std;

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
	member.printStatic();

	member2.print();
	member2.printStatic();

}
