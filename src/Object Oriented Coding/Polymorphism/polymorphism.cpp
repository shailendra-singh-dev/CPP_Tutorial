//============================================================================
// Name        : Polymorphism.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

/**
 * https://www.geeksforgeeks.org/virtual-function-cpp/?ref=lbp
 *
 * 1. If object of that class is created then a virtual pointer (VPTR) is inserted as a data member of the class to point to VTABLE of that class.
 *    For each new object created, a new virtual pointer is inserted as a data member of that class.
   2. Irrespective of object is created or not, class contains as a member a static array of function pointers called VTABLE. Cells of this table
      store the address of each virtual function contained in that class.
 */

//https://www.quora.com/What-are-vTable-and-VPTR-in-C++

class Base {
public:
	virtual void show() {
		cout << "Base:show()" << endl;
	}
	void print() {
		cout << "Base:print()" << endl;
	}

	void fun_1() {
		cout << "Base:fun_1()" << endl;
	}
	virtual void fun_2() {
		cout << "Base:fun_2()" << endl;
	}
	virtual void fun_3() {
		cout << "Base:fun_3()" << endl;
	}
	virtual void fun_4() {
		cout << "Base:fun_4()" << endl;
	}

	void fun1() {
		cout << "Base fun1()" << endl;
	}
	virtual void fun2() {
		cout << "Base fun2()" << endl;
	}
	virtual void fun3() {
		cout << "Base fun3()" << endl;
	}
	virtual void fun4(int x) {
		cout << "Base fun4()" << endl;
	}

};

class Derived: public Base {
public:
	void show() {
		cout << "Derived:show()" << endl;
	}
	void print() {
		cout << "Derived:print()" << endl;
	}

	void fun_1() {
		cout << "Derived:fun_1()" << endl;
	}
	void fun_2() {
		cout << "Derived:fun_2()" << endl;
	}
	void fun_4(int x) {
		cout << "Derived:fun_4()" << endl;
	}
	void fun1() {
		cout << "Derived fun1()" << endl;
	}
	void fun2() {
		cout << "Derived fun2()" << endl;
	}
	void fun3() {
		cout << "Derived fun3()" << endl;
	}
	void fun4() {
		cout << "Derived fun4()" << endl;
	}
};

int Polymorphism_main() {
	//0.
//	Base* base = new Derived();
//	base->show();
//	base->print();

	Base* base;
	Derived derived;
	base = &derived;

	base->show(); // late binding.
	base->print(); // early binding.
	/*base->fun_1(); // early binding.
	base->fun_2(); // late binding.
	base->fun_3(); // late binding.
	base->fun_4(); // late binding.

	// Early binding but this function call is
	// illegal(produces error) because pointer
	// is of base type and function is of
	// derived class
	// base->fun_4(10);

	//1.
	Derived derived;
	Base* baseObject;
	baseObject = &derived;

	//Base object.
	baseObject->fun1(); //Base fun1
	baseObject->fun2(); // Derived fun2
	baseObject->fun3(); // Derived fun3
	baseObject->fun4(10); // Base fun4

	//Derived object.
	derived.fun1(); //Derived fun1()
	derived.fun2(); //Derived fun2()
	derived.fun3(); //Derived fun3()
	derived.fun4(); //Derived fun4()

	//2.
	Base *baseObj = new Base();
	baseObj->fun1();
	baseObj->fun2();
	baseObj->fun3();
	baseObj->fun4(10);

	Derived *derivedObj = new Derived();
	derivedObj->fun1();
	derivedObj->fun2();
	derivedObj->fun3();
	derivedObj->fun4();

	baseObj = derivedObj;
	baseObj->fun1();
	baseObj->fun2();
	baseObj->fun3();
	baseObj->fun4(10);

	//3.
	Base *derivedPointer = new Derived();
	derivedPointer->fun1();
	derivedPointer->fun2();
	derivedPointer->fun3();
	derivedPointer->fun4(10);

	*/
	return 0;
}
