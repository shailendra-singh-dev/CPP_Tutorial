/*
 * void_and_void_Pointer.cpp
 *
 *  Created on: Mar 9, 2023
 *      Author: ssingh42
 */

/**
 * https://www.youtube.com/watch?v=t9s6280XQ5Q&list=PLk6CEY9XxSIDxoAaWfdNSX-QckVXMWMMZ&index=1
 */


/**
 Question: What is void and void pointer (void *) in C/C++?

TOPIC: void

1) void is used to denote nothing
2) if some function is not returning anything then we use void type to denote that.
3) if some function doesn't take any parameter then we use void type to denote that.
4) we can not create void variable.
5) sizeof void is 1 in gcc compilers but in other it is not valid to check sizeof void.

TOPIC: void*

1) void* is universal pointer.
2) we can convert any data type pointer to void* (except function pointer, const or volatile)
3) void * can not be dereferenced.

**/
#include <iostream>
void fun() {}

int main() {

	int *i = new int(10);
	void *v = static_cast<void*>(i);
	cout << *v << endl;
}
