/*
 * Conversion_Constructor.cpp
 *
 *  Created on: Feb 12, 2023
 *      Author: ssingh42
 */


#include "iostream"

using namespace std;

class Conversion{
	int i;
public:
	Conversion(int i):i(i){
	}

	int get(){
		return i;
	}
};

void conversion_main(){
	Conversion obj = 10;
	cout << obj.get() << endl;
}




