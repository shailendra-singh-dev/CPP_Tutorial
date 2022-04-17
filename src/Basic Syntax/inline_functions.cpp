/*
 * inline_functions.cpp
 *
 *  Created on: Jul 10, 2022
 *      Author: ssingh42
 */

#include <iostream>
using namespace std;

/**
 * virtual and recursive functions can't be declared as inline.
 */

void print(int x){
	cout << x << endl;
}


void inline_functions_main(){
	for(int i=0;i< 1000; i++){
		print(i);
	}
}





