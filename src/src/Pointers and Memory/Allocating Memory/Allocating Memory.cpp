//============================================================================
// Name        : Allocating.cpp
// Author      : Shailendra
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "animal.h"

using namespace std;
using namespace Allocating_Memory;

int Allocating_Memory_main() {
	int* pInt = new int[1000];
	cout << *pInt << endl;
	cout << "sizeof(pInt): " << sizeof(pInt) <<endl;
	delete[] pInt;

	char* pChar = new char[1000];
	cout << *pChar << endl;
	cout << "sizeof(pChar): " << sizeof(pChar) <<endl;
	delete[] pChar;

	Animal* pAnimal = new Animal[10];
	char c = 'a';
	for (int i = 0; i < 10; i++) {
		string name(1,c++);
		pAnimal[i].setName(name);
		pAnimal[i].speak();
	}
	cout << "sizeof(pAnimal): " << sizeof(pAnimal) <<endl;
	delete[] pAnimal;

	return 0;
}
