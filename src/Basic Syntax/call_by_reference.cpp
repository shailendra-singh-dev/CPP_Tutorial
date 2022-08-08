/*
 * call_by_value.cpp
 *
 *  Created on: Jul 3, 2022
 *      Author: ssingh42
 */


#include <iostream>
using namespace std;

void call_by(int& a){
	a = a + 10;
}

void call_by_reference_main(){
	int a=1000;
	cout << a <<endl;
	call_by(a);
	cout << a <<endl;
}

