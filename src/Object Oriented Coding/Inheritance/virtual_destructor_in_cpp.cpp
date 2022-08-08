/*
 * virtual_destructor_in_cpp.cpp
 *
 *  Created on: Aug 7, 2022
 *      Author: ssingh42
 */

/**
 * NOTES:
	1. If we delete child class object through a pointer of parent class then it is undefined behaviour,
	   if parent class doesn't have virtual destructor.
	2. If we fail to declare destructor as virtual in parent class then we endup having memory leak.
	 *
 */

#include <iostream>
using namespace std;

namespace virtual_destructor {
class Base {
public:
	Base() {
		cout << "Base constructor" << endl;
	}
   virtual ~Base() {
		cout << "Base destructor" << endl;
	}
};

class Derived: public Base {
public:
	Derived() {
		cout << "Derived constructor" << endl;
	}
	~Derived() {
		cout << "Derived destructor" << endl;
	}
};

}


void virtual_destructor_in_cpp_main(){
	// Destruction happens in Stack based order.
	/*virtual_destructor::Derived d;
	cout << sizeof(d) << endl; // if we declare destructor as virtual, virtual pointer will be introduced at compile time.

	cout << "-----------" << endl;

	//virtual_destructor::Base* obj= new virtual_destructor::Derived();
	//delete obj; */

	// OR

	/** No memory leakage for below **/
	//1. virtual_destructor::Derived d;
	/*2. virtual_destructor::Derived d;
	     virtual_destructor::Base& b= d;
	 */
	virtual_destructor::Base* obj= new virtual_destructor::Derived();
	delete obj;
}
