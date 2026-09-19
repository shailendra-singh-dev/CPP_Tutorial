//============================================================================
// Name        : The.cpp
// Author      : Shailendra
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Person.h"

using namespace std;
using namespace The_const_Keyword;

int The_const_Keyword_main() {
	int value = 10;
	const int* pValue1 = &value;
	int number1 = 100;
	pValue1 = &number1;
	//	*pValue1 = 1000;//Error case where Pointer variable points to variable which can't be changed.
	cout << "pValue:" << *pValue1 << endl;

	int* const pValue2 = &value;
	int number2 = 100;
	//	pValue2 = &number2;//Error case where Pointer variable can't be changed to point to different variable.
	*pValue2 = 1000;
	cout << "pValue2:" << *pValue2 << endl;

	int value3 = 10;
	const int* const pValue3 = &value3;
	int number3 = 100;
//	pValue3 = &number3;//Error case where Pointer variable points to variable which can't be changed.
//	*pValue3 = 10000;//Error case where Pointer variable points to variable which can't be changed.
	cout << "pValue3:" << *pValue3 << endl;

	Person person("Shailendra");
	person.toString();

	return 0;
}
