/*
 * lvalue_and_rvalue.cpp
 *
 *  Created on: Aug 8, 2022
 *      Author: ssingh42
 */
/**
 * Every expression in C++ is either Lvalue or Rvalue expression;

	1. Lvalue: If you can take address of expression then it is Lvalue, and they last extended period of time.
	2. Rvalue: Rvalues are such expression which you can't take address and they are temporary, they don't exist after one line.
 *
 */

#include <iostream>
using namespace std;

void lvalue_and_rvalue_main(){
	int x=10;
	int& y=x;
	cout << y<< endl;

	const int&& z=30;
	cout << z<< endl;
}


