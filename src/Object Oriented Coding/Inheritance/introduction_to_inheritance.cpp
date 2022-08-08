/*
 * introduction_to_inheritance.cpp
 *
 *  Created on: Jul 30, 2022
 *      Author: ssingh42
 */

/**
 * https://www.youtube.com/watch?v=W3kpFSbkqQ8&list=PLk6CEY9XxSIAQ2vE_Jb4Dbmum7UfQrXgt&index=62
 *
 * TYPES OF INHERITANCE:
 1. Single
 A derived class with only one base class is called single inheritance.
			 A
			 ^
			 |
			 B

 2. Multilevel
 A derived class with a base class and that base class is a derived class of another, is called multilevel inheritance.

			 A
			 ^
			 |
			 B
			 ^
			 |
			 C

 3. Multiple
 A derived class with multiple base class is called multiple inheritance.

		 B1  B2   B3
		 ^	^    ^
		  \  |  /
			 C

 4. Hierarchical
 Multiple derived classes with same base class is called hierarchical inheritance.

		    A
		  ^ ^ ^
		 /  |  \
	    B 	C   D


 5. Hybrid
 Combination of multiple and hierarchical inheritance is called hybrid inheritance.

		   B1   B2   B3
			^	^   ^
			 \  |  /
			    C
			  ^ ^ ^
			 /  |  \
		 	D1 	D2  D3


 6. Multipath
 A derived class with two base classes and these two base classes have one common base class is called multipath inheritance.

			   A
			  ^ ^
			 /   \
			B     C
			^     ^
			 \   /
			   D

 MODES OF INHERITANCE
 1. public  (Visible to everyone)
 2. protected (Visible to current class and derived class only)
 3. private (Visible to current class only)

 --------------------------------------------------------------
 |	BASE CLASS | DERIVED CLASS | DERIVED CLASS | DERIVED CLASS |
 --------------------------------------------------------------
 |			   | Private       | Protected     | Public        |       <<<---- Inheritance Modes
 --------------------------------------------------------------
 |	Private    | Not inherited | Not inherited | Not inherited |
 |	Protected  | Private       | Protected     | Protected     |
 |	Public     | Private       | Protected     | Public        |
 *
 */
#include <iostream>
using namespace std;

class Base {
public:
	int x;
	Base(int x=0):x(x){
	}

};

class Derived: public Base {
public:
	void print() {
		cout << x << endl;
	}
};

class Derived1: public Derived {
public:
	void print() {
		cout << x << endl;
	}
};

class Animal {
public:
	void walk(){
		cout << "Walking......" << endl;
	}
};

class Dog : public Animal{
public:
	void talk(){
		cout << "Dog talking......" << endl;
	}
};

class Cat : public Animal{
public:
	void talk(){
		cout << "Cat talking......" << endl;
	}
};

class Cow : public Animal{
public:
	void talk(){
		cout << "Cow talking......" << endl;
	}
};

//Outside scope, public  (Visible to everyone)
void introduction_to_inheritance_main(){
	Base base(100);
	Derived derived;
	cout << base.x << endl;
	cout << derived.x << endl;

	Dog dog;
	Cat cat;
	Cow cow;
	dog.talk();
	cat.talk();
	cow.talk();
}


