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
 * Inline functions in c++ are good help when the function size is very less and there are few conditions for a
 *  function to be qualified for inline function if it passes it compiler will treat it inline function.
    It can be placed at calling side so we don't have calling overhead of a function.
 */

void print(int x){
	cout << x << endl;
}


void inline_functions_main(){
	for(int i=0;i< 1000; i++){
		print(i);
	}
}





