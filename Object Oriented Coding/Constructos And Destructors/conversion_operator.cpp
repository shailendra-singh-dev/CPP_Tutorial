/*
 * conversion_operator.cpp
 *
 *  Created on: Feb 12, 2023
 *      Author: ssingh42
 */

#include "iostream"
using namespace std;

class Boo{
	double value;
public:
	Boo(double val):value(val){

	}
	operator double(){
		return value;
	}
};

void conversion_operator_main(){
	Boo obj(100);
	double value = obj;
	cout << value << endl;
}
