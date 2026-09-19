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
// https://www.geeksforgeeks.org/cpp/lvalues-references-and-rvalues-references-in-c-with-examples/

#include <iostream>
using namespace std;

/*
 * Swap function to swap two integers using lvalue references
 */
void swap(int& a,int& b){
	int temp=a;
	a=b;
	b=temp;
}


void lvalue_and_rvalue_main(){
	//lvalue example
	int x=10;
	int& y=x;
	cout << y<< endl;

	//rvalue example
	const int&& z=30;
	cout << z<< endl;
}


