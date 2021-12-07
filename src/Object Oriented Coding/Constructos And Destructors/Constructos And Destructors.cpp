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
