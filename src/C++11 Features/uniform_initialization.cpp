/*
 * uniform_initialization.cpp
 *
 *  Created on: May 21, 2023
 *      Author: shailendra
 */

/**
 * https://www.geeksforgeeks.org/uniform-initialization-in-c/
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
