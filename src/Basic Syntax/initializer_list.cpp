/*
 * initializer_list.cpp
 *
 *  Created on: Jul 12, 2022
 *      Author: ssingh42
 */


#include "iostream"
using namespace std;


/**
 * NOTES:
	1. Constructors And Member Initializer Lists C++
	2. This is used to initialize data members of classes.

	Two ways are there to do this.
	1. Using {}  this is uniform initialization and should be preferred.
    2. Using ()
 */
class Initializer_List {
private:
	int a;
	char b;

public:
	Initializer_List(): a(0),b(300){
		/* Using{} it will be:  error: narrowing conversion of ‘300’ from ‘int’ to ‘char’ [-Wnarrowing]
		 * using () only warning but compiling will pass.
		 *
		*/
	}

	Initializer_List(int _a, char _b): a(_a),b(_b){
		a = _a;
		b = _b;
		cout << "a:" << _a << ",b:" << _b << endl;
	}

    int getA(){
		return a;
	}

    char getB(){
		return b;
	}


};

