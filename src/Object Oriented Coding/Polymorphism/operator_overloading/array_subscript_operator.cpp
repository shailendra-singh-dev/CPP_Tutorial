/*
 * array_subscript_operator.cpp
 *
 *  Created on: Jul 23, 2022
 *      Author: ssingh42
 */

/**
 * https://www.youtube.com/watch?v=8rSB8qwaOUM&list=PLk6CEY9XxSIAQ2vE_Jb4Dbmum7UfQrXgt&index=56
 *
 * 1. Array Subscript Operator can be used to check out of bound cases.
 */

#include <iostream>
using namespace std;

/**
 * POINTS:
  1. Array Subscript Operator can be used to check out of bound cases.
 */

class Point {
private:
	int arr[2];
public:
	Point(int x = 0, int y = 0) {
		arr[0] = x;
		arr[1] = y;
	}

	int& operator[](int pos) {
		if (pos == 0)
			return arr[0];
		else if (pos == 1)
			return arr[1];
		else {
			cout << "Out of bound .." << endl;
			exit(0);
		}
	}
};

void array_subscript_operator_main() {
	Point p(10, 20);
	cout << p[0] << endl;
	cout << p[1] << endl;
	p[0] = 30;
	p[1] = 40;
	cout << p[0] << endl;
	cout << p[1] << endl;
}

