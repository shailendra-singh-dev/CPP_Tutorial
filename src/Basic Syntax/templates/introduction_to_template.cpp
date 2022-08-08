/*
 * introduction_to_template.cpp
 *
 *  Created on: Aug 4, 2022
 *      Author: ssingh42
 */

/**
 * POINTS:
	1. There are two places where we can apply templates.
	   a. function templates
	   b. class templates
	2. Templates are the way to write generic programs.
	3. The main point is we pass data type as parameter to function or class.
 */

#include <iostream>
using namespace std;

template <typename T>
T getMax(T x, T y){
	return x>y?x:y;
}

void introduction_to_template_main(){
	cout << static_cast<int>(getMax(10,2)) << endl;
	cout << static_cast<char>(getMax('a','x')) << endl;
}



