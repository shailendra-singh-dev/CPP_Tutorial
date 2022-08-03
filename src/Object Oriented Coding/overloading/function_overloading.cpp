/*
 * function_overloading.cpp
 *
 *  Created on: Jul 10, 2022
 *      Author: ssingh42
 */

#include <iostream>
using namespace std;

/**
 * https://www.youtube.com/watch?v=zMcfPv82tYI&list=PLk6CEY9XxSIAQ2vE_Jb4Dbmum7UfQrXgt&index=34
 *
 * POINTS:
1. C++ allows to overload member functions on the basis of const and non-const.
2. const parameters allows to overload member functions and normal function but it should be reference/pointer.
 */



void add(int x){
	cout << x << endl;
}

/** Same
void add(const int x){
	cout << x << endl;
}

void add(volatile int y){
	cout << y << endl;
}

//Same
void load(int ()){
}

void load(int (*)()){
}

*/

void subtract(int& x){
	cout << x << endl;
}

void subtract(const int& x){
	cout << x << endl;
}

void subtract(const int* x){
	cout << *x << endl;
}

class Test{
public:
	void multiply() {
		cout << "Non const" << endl;
	}

	void multiply() const{
		cout << "const" << endl;
	}
};



void function_overloading_main(){
	int a=1000;
	add(a);
	subtract(a);
	subtract(&a);

	Test test;
	Test test2;
	test.multiply();
	test2.multiply();
}





