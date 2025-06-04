/*
 * const_data_member.cpp
 *
 *  Created on: Jul 14, 2022
 *      Author: ssingh42
 */

/**
 ** https://www.youtube.com/watch?v=YHr-ywZ30c0&list=PLk6CEY9XxSIAQ2vE_Jb4Dbmum7UfQrXgt&index=44
 **/

#include <iostream>
using namespace std;

/**
 * NOTES:
	They are constant so can not be changed once initialized.

	Ways to initialize:
	1st Way: Initialize in class
	2nd Way: Initializer list is used to initialize them from outside.
 *
 */

class ConstDataMember {
private:
	const int pi = 3.1416;
	const int radius;
public:
	ConstDataMember(int r):radius{r} {
		cout << r << endl;
	}
	int getArea() {
		return pi * radius * radius;
	}
};


void const_data_member_main(){
	ConstDataMember constDataMember(100);
	cout << constDataMember.getArea() << endl;
}
