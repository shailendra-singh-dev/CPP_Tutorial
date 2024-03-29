/*
 * call_by_value.cpp
 *
 *  Created on: Jul 3, 2022
 *      Author: ssingh42
 */

/*
 * So when we call function by reference then we can change the value of passed parameters.
 * it is similar to called by pointers but call by reference is less tedious then pointer.
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

