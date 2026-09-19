/*
 * constructor_calling_another_constructor.cpp
 *
 *  Created on: Feb 13, 2023
 *      Author: ssingh42
 */


#include "iostream"
using namespace std;

class Foo{
public:
	Foo(int x, int y);
};

Foo::Foo(int x=10, int y=20){
	cout << x << endl;
	cout << y << endl;
}

void constructor_calling_another_constructor_main(){
	Foo obj;
}
