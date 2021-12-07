//============================================================================
// Name        : Inheritance.cpp
// Author      : Shailendra
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Inheritance.h";

using namespace std;
using namespace Inheritance;

int Inheritance_main() {
	Animal animal;
	animal.speak();

	Cat cat;
	cat.speak();
	cat.walk();

	Tiger tiger;
	tiger.speak();
	tiger.walk();
	tiger.attack();

	return 0;
}
