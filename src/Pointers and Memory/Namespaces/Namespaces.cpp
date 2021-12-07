//============================================================================
// Name        : Namespaces.cpp
// Author      : Shailendra
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Animals.h"
#include "Cat.h"

int Namespaces_main() {
	cat1::Cat cat1;
	cat1.speak();

	cat2::Cat cat2;
	cat2.speak();

	return 0;
}
