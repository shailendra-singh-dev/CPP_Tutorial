/*
 * constructor.cpp
 *
 *  Created on: Jul 10, 2022
 *      Author: ssingh42
 */

#include "iostream"
using namespace std;


class MemoryDeference{
	int* x;

public:
	MemoryDeference():x(nullptr){
		cout << "Allocating memory for x with nullptr" << endl;
	}

	MemoryDeference(int* y):x(y){
		cout << "Allocating memory for x with y" << endl;
	}

	~MemoryDeference(){
		delete x;
		cout << "De allocating memory for x"  << endl;
	}
};

void constructor_main(){
	MemoryDeference a(new int(1000));
}
