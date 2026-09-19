/*
 * reverse_array.cpp
 *
 *  Created on: Aug 5, 2021
 *      Author: ShSingh
 */

#ifndef ARRAYS_REVERSE_ARRAY_CPP_
#define ARRAYS_REVERSE_ARRAY_CPP_
#include <stdint.h>
#include "stdio.h"
#include <iostream>
using namespace std;

uint8_t* ReverseArray(uint8_t *array, uint16_t Length) {
	for (uint8_t i = 0; i < Length / 2; i++) {
		uint8_t temp = *array;
		*array = *(array + (Length - i - 1));
		*(array + (Length - i - 1)) = temp;
	}
	return array;
}

void swap(string a, string b) {
	string temp = a;
	a = b;
	b = temp;
}

void ReverseStringArray() {
	int length = 5;
	string stringArray[length] = { "This", "is", "Shailendra", "Singh" };
	string *pStart = stringArray;
	string *pEnd = &stringArray[length - 1];
	while (pStart != pEnd) {
		swap(*pStart, *pEnd);
		pStart++;
		pEnd--;
	}
	for (int i = 0; i < length; i++) {
		cout << stringArray[i] << endl;
	}
}

void ReverseCharArray() {
	int length = 5;
	char array[length] = "hello";
	char *pStart = array;
	int nChars = sizeof(array) - 1;
	char *pEnd = pStart + nChars - 1;
	while (pStart != pEnd) {
		swap(pStart, pEnd);
	}
	for (int i = 0; i < length; i++) {
		cout << array[i] << endl;
	}
}

void swap(char *a, char *b) {
	char temp = *a;
	*a = *b;
	*b = temp;

}

#endif /* ARRAYS_REVERSE_ARRAY_CPP_ */
