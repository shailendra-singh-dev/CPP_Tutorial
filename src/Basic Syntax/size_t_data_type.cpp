/*
 * size_t_data_type.cpp
 *
 *  Created on: Aug 3, 2022
 *      Author: ssingh42
 */


#include <iostream>
using namespace std;

/**
 * POINTS:
	1. It is used to represent size of objects/variables in bytes.
	2. sizeof returns this data type only.
	3. It guarantee to be big enough to contain the size of the biggest object that system can handle.
	   a. If compiler is 32 bit: IT IS typedef of unsigned int
	   b. If compiler is 64 bit: IT IS typedef of unsigned long long.
	4. It is never negative.
	5. Standard functions use this type for count/number.
	   a. malloc (size_t)
	   b. memcpy (destination, source, size_t)
	   c. size_t strlen (const char*)
 */

void print(size_t count){
	while(count--){
		cout << "CPPNuts" << endl;
	}
}

void size_t_data_type_main(){
	print(10);
}
