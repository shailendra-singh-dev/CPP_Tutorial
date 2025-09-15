/*
 * multipath_inheritance.cpp
 *
 *  Created on: Aug 2, 2022
 *      Author: ssingh42
 */


/**
 * POINS:
	1. A derived class with two base classes and these two base classes have one common base class is called multipath inheritance.
 */

#include <iostream>
using namespace std;

class Human{
public:
	void breathing(){
		cout << "I am breathing!!!" << endl;
	}
};
class Engineer: public virtual Human{};
class Doctor : public virtual Human{};
class Shailendra: public Engineer, public Doctor{};


void multipath_inheritance_main(){
	Shailendra shailendra;
	shailendra.breathing();
}
