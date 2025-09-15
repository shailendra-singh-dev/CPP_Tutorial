/*
 * convert_x_to_y.cpp
 *
 *  Created on: Mar 7, 2023
 *      Author: ssingh42
 */

/**
 * Write a function to calculate the number of bit swaps required to convert one integer to other.
 * https://www.geeksforgeeks.org/count-number-of-bits-to-be-flipped-to-convert-a-to-b/
 * https://stackoverflow.com/questions/4120397/interview-question-number-of-bit-swaps-required-to-convert-one-integer-to-anoth
 */

#include "vector"
#include <iostream>
using namespace std;

int convert_x_to_y(int X, int Y){
	int count=0;
	for(int i=X^Y; i!=0 ; i>>1){
		count += i&1;
	}
	return count;
}

