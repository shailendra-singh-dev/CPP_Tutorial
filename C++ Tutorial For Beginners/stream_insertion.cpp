/*
 * stream_insertion.cpp
 *
 *  Created on: Jul 23, 2022
 *      Author: ssingh42
 */

/**
 * https://www.youtube.com/watch?v=2972LRdyquk&list=PLk6CEY9XxSIAQ2vE_Jb4Dbmum7UfQrXgt&index=57
 *
 * 1. When we need overload these operators?
   2. It can't be class member function (reason we will discuss), you have to make it friend function of your class.
 */

#include <iostream>
using namespace std;


/**
 * POINTS:
	1. When we need overload these operators?
	2. It can't be class member function (reason we will discuss), you have to make it friend function of your class.
 */
class Student {
private:
	int age;
	string name;
public:
	friend istream& operator >>(istream& input, Student& obj);
	friend ostream& operator <<(ostream& output, Student& obj);
};

istream& operator >>(istream& input, Student& obj) {
	input >> obj.age;
	input >> obj.name;
	return input;
}

ostream& operator <<(ostream& output, Student& obj) {
	output << obj.age << endl;
	output << obj.name << endl;
	return output;
}

void stream_insertion_main() {
	Student obj;
	cin >> obj;
	cout << obj;

	Student obj2;
	cin >> obj >> obj2;
	cout << obj << obj2;

}
