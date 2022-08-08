//============================================================================
// Name        : Malloc_Vs_New.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdlib.h>

using namespace std;

int Malloc_Vs_New_main() {
	int* a = new int(10);
	cout << "a:" << a << " sizeof(a):"<< sizeof(a) << endl ;

	int* b = (int*) malloc(sizeof(int));
	cout << "b:" << b << " sizeof(b):"<< sizeof(b) << endl ;

	return 0;
}
