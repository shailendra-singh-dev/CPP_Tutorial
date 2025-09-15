/*
 * pure_virtual_function_in_cpp.cpp
 *
 *  Created on: Aug 7, 2022
 *      Author: ssingh42
 */

/**
 * Pure Virtual Function

	SYNTAX: virtual returntype functionname(parameters...) = 0;

	NOTES:
	0. If some class can have only signature of function but not the body then we use pure virtual functions.
	1. Sometimes in Base class we know the function name but not the definition of the function, so we want Derived classes to provide the definition of the function.
	2. We can actually give body of pure virtual function.
	3. If you have pure virtual function in your class, it means that class is an Abstract class and you can't create an object of that class. (But pointers and Reference can be created)

	USE CASE:
	1. Used to create abstract classes, which helps in creating interfaces (APIs)
 *
 */


#include <iostream>
using namespace std;

namespace pure_virtual_function {

	class Interface {
	public:
		virtual void common() =0;
	};

	void Interface::common() {
		cout << "pure virtual function body. But it will not allow object creation if not overridden in derived class"<< endl;
	}

	class ClassA: public Interface {
	public:
		void common() {
			Interface::common();
			cout << "ClassA common()" << endl;
		}
	};

	class ClassB: public Interface {
	public:
		void common() {
			Interface::common();
			cout << "ClassB common()" << endl;
		}
	};
}

void pure_virtual_function_in_cpp_main() {
	//Base class object can't be created.
	//pure_virtual_function::Interface interface;

	// Derived class objects can be created via reference OR pointer.
	// For A
	pure_virtual_function::ClassA classAobj;
	pure_virtual_function::Interface& classAReferenceObj = classAobj;
	classAReferenceObj.common();

	pure_virtual_function::ClassA& classAReferenceObject = classAobj;
	classAReferenceObject.common();

	pure_virtual_function::ClassA* classAPointerObj = new pure_virtual_function::ClassA();
	classAPointerObj->common();

	//For B
	pure_virtual_function::ClassB classBobj;
	pure_virtual_function::Interface& classBReferenceObj = classBobj;
	classBReferenceObj.common();

	pure_virtual_function::ClassB& classBReferenceObject = classBobj;
	classBReferenceObject.common();

	pure_virtual_function::ClassB* classBPointerObj = new pure_virtual_function::ClassB();
	classBPointerObj->common();

}

