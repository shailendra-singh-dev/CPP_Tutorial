/*
 * virtual_function_in_cpp.cpp
 *
 *  Created on: Aug 7, 2022
 *      Author: ssingh42
 */
/**
 * https://www.youtube.com/watch?v=WdOe1bPf_pg&list=PLk6CEY9XxSICC720VHmI-N-fqlEF7XwG_
 */
/**
 * NOTES:
	1. WHY to use virtual function?
	   a. To achieve dynamic polymorphism. Which is the ability to call Derived class function using Base class pointer or reference.

	2. HOW to use virtual function?
	   a. By declaring function as virtual in Base class and overriding that function in Derived class.
		  (Function signature should be same in Base and Dervied class)
	   b. Declaring a function as virtual in Base class is enough, Derived class function need not to be declared virtual.
	   c. Virtual functions should be accessed using pointer(*) or reference(&) of Base class type to achieve run time polymorphism.

	ADITIONAL NOTES:
	1. Virtual functions cannot be static and also cannot be a friend function of another class.
	2. A class can have virtual destructor but can't have virtual constructor.
	3. There are two types of virtual functions in C++.
	   a. Virtual Function
	   b. Pure Virtual Function
 */

#include <iostream>
using namespace std;

namespace virtual_function {
class Animal {
public:
	virtual void eat() {
		cout << "Animal eating" << endl;
	}
};

class Cat: public Animal {
public:
	void eat() {
		cout << "Cat eating" << endl;
	}
};

class Cow: public Animal {
public:
	void eat() {
		cout << "Cow eating" << endl;
	}
};
}

class Interface{
public:
	virtual void commonFunction() =0;
};

class Implementation : public Interface {
public:
  void commonFunction(){
	  cout << "commonFunction.." << endl;
  }
};


void virtual_function_in_cpp_main(){
	virtual_function::Animal* animal= new virtual_function::Animal();
	animal->eat();

	// Run time polymorphism..
	//1. Using Pointer
	virtual_function::Animal* cat= new virtual_function::Cat();
	cat->eat();
	virtual_function::Animal* cow= new virtual_function::Cow();
	cow->eat();

	//2. Using references..

	virtual_function::Cat catObj;
	virtual_function::Animal& catRef = catObj;;
	catRef.eat();

	virtual_function::Cow cowObj;
	virtual_function::Animal& cowRef = cowObj;
	cowRef.eat();

	//Interface* interfaceObj= new Interface(); Not possible since pure virtual function.
	Interface* implementation= new Implementation();
	implementation->commonFunction();

}
