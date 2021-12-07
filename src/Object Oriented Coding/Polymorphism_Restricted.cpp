//============================================================================
// Name        : Polymorphism_Restricted.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Base {
public:
	virtual void show() {
		cout << "Base:show()" << endl;
	}
};

class Derived: public Base {
private :
	void show() {
		cout << "Derived:show()" << endl;
	}
};
int Polymorphism_Restricted_main() {
	/**
	 * Access specifiers are checked at compile time and show() is public in base class. At run time, only the function corresponding to the
       pointed object is called and access specifier is not checked. So a private function of derived class is being called through a pointer of base class.
       It will cause Compile time Error.'virtual void Derived::show()' is private
	 */

	Derived derived;
//	derived.show();

	Derived* ptr = new Derived();
//	ptr->show();

	Base* base = new Derived();
	base->show();

	return 0;
}
