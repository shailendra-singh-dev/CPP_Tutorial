//============================================================================
// Name        : Copy.cpp
// Author      : Shailendra
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "person.h"

using namespace std;
using namespace Copy_Constructor;

int Copy_Constructor_main() {
	Person person1;
	person1.setName("Freedy");
	person1.speak();

	Person person2 = person1;
	person2.setName("Bob");
	person2.speak();

	return 0;
}
