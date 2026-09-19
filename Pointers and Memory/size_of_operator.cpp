/*
 * size_of_operator.cpp
 *
 *  Created on: Jul 3, 2022
 *      Author: ssingh42
 */


#include <stdio.h>
#include <iostream>
using namespace std;

/**
 * https://www.youtube.com/watch?v=-DwuylKTlTM&list=PLk6CEY9XxSIAQ2vE_Jb4Dbmum7UfQrXgt&index=21
 */
void size_of_operator_main() {
	int a = 10;
	cout << sizeof(a) << endl;
	int* b = new int(100);
	cout << sizeof(b) << endl; // In case of pointer if you are running on 32bit it will be 4 Bytes, for 64 Bit 8 Bytes viceversa irrespective of data type.
	long* c = new long(100);
	cout << sizeof(c) << endl;

}




