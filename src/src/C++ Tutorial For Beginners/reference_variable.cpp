//============================================================================
// Name        : If.cpp
// Author      : Shailendra
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

/**
 * https://www.youtube.com/watch?v=NGKt3Xwlobg&list=PLk6CEY9XxSIAQ2vE_Jb4Dbmum7UfQrXgt&index=8
 */
void reference_variable_main() {
	int a =10;
	int& b = a;
	cout << a << b<< endl;
}
