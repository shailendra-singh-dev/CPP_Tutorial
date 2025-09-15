#include "person.h"
#include <strstream>

string Person::toString(){
   return "My name is " +name;
}

Person::Person(string newName){
	name = newName;
}

Person::~Person(){
	cout << "Called destructor !!" <<endl;
}

