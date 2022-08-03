//============================================================================
// Name        : Constructos.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Cat.h"

using namespace std;
using namespace Constructos_And_Destructors;

/**
 * NOTES Destructors:
1. This is a special member function with same name as class with ~ at front.
2. Used to destruct the memory of object which was constructed by constructor.
3. Destructors get called automatically (implicit call), as constructor was.
4. We can call destructors explicitly but that is not good practice.
5. The only place where you will call destructors explicitly is after placement new (this is little advanced topic).
 */

int Constructos_And_Destructors_main() {
	cout << "!!!Start program!!!" << endl;

	{
		Cat cat1;
		cat1.setIsHappy(true);
		cat1.speak();
	}

	{
		Cat cat2;
		cat2.setIsHappy(false);
		cat2.speak();
	}

	cout << "!!!End program!!!" << endl;
	return 0;
}
