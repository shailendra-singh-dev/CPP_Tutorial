//============================================================================
// Name        : Data.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Cat.h"

using namespace std;
using namespace Data_Members;

int Data_Members_main() {
	Cat cat1;
	cat1.makeHappy();
	cat1.speak();

	Cat cat2;
	cat2.makeSad();
	cat2.speak();

	return 0;
}
