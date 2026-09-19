//============================================================================
// Name        : Returning.cpp
// Author      : Shailendra
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "animal.h"

using namespace std;

Animal* createAnimal() {
	Animal* a = new Animal();
	a->setName("LION");
	return a;
}

int Returning_Objects_from_Functions_main() {
	Animal* b = createAnimal();
	b->speak();
	return 0;
}
