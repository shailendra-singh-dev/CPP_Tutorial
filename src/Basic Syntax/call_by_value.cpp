/*
 * call_by_value.cpp
 *
 *  Created on: Jul 3, 2022
 *      Author: ssingh42
 */


#include <iostream>
using namespace std;

void call_by(int a,int b=100, int c=200){
	cout << a << "," << b << "," << c << endl;
}

void call_by_value_main(){
	call_by(10);
	call_by(10,20);
	call_by(100,1000,10000);
}

