/*
 * const_member_function.cpp
 *
 *  Created on: Jul 22, 2022
 *      Author: ssingh42
 */

#include <iostream>
using namespace std;


/**
 * https://www.geeksforgeeks.org/cpp/const-keyword-in-cpp/
 * NOTES:
	const member function is used to restrict modification of data members inside function.
 */

class ConstMember {
private:
	mutable int x;
	int y;
public:
	ConstMember():x(0),y(0){

	}
	void setX(int x) {
		this->x = x;
	}
	int getX() const {
		x = 10;
		return x;
	}
	void setY(int y) {
		this->y = y;
	}
	int getY() const {
		//y =-100; // It will be compile time error. error: assignment of member ‘ConstMember::y’ in read-only object
		return y;
	}
};

void const_member_function_main(){
	ConstMember obj;
	cout << obj.getX() << endl;
	cout << obj.getY() << endl;
	obj.setX(100);
	obj.setY(200);
	cout << obj.getX() << endl;
	cout << obj.getY() << endl;
	int z = obj.getY();
	z=100;
	cout << z << endl;
}
