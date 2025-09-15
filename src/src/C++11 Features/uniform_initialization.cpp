/*
 * uniform_initialization.cpp
 *
 *  Created on: May 21, 2023
 *      Author: shailendra
 */

/**
 * https://www.geeksforgeeks.org/uniform-initialization-in-c/
 *
 * Uniform initialization is a feature in C++ 11 that allows the usage of a consistent syntax to initialize
 * variables and objects ranging from primitive type to aggregates.
 * In other words, it introduces brace-initialization that uses braces ({}) to enclose initializer values. The syntax is as follows:
   type var_name{arg1, arg2, ....arg n}
 */

#include <iostream>
using namespace std;

class A{
public:
	int x;
	int y;
	A(int x,int y):x(x),y(y){
	}

	void show(){
		cout << x << "," << y << endl;
	}
};

A getA(int x, int y){
	return {x,y};
}
void uniform_initialization_main(){
	A obj= getA(10,20);
	obj.show();
}
