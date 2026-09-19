//============================================================================
// Name        : Delete_Vs_Free.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int Delete_Vs_Free_main() {
	int a = 100;
	int* b = &a;
	int* c = new int(202);
	int* d = NULL;

	delete b;

	return 0;
}
