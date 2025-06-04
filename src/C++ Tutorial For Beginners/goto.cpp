/*
 * goto.cpp
 *
 *  Created on: Jul 3, 2022
 *      Author: ssingh42
 */



#include <stdio.h>
#include <iostream>
using namespace std;


void goto_main() {
	cout << "first" << endl;
	goto a;
	cout << "second" << endl;
	cout << "third" << endl;
	a:
	cout << "fourth" << endl;
}


