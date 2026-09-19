//============================================================================
// Name        : Struct.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class Class_Test {
	int x; //default access is private
};

class Derived_Class_Test: Class_Test {
}; // is equalent to (class Derived_Class_Test: private Class_Test)

struct Struct_Test {
	int x;//default access is public
};

struct Derived_Struct_Test: Struct_Test {
};

int Struct_Vs_Class_main() {
	//	Class_Test class_test;
	//	class_test.x =10;
	//	cout << "x:" << class_test.x  << endl;

	Struct_Test struct_test;
	struct_test.x = 100;
	cout << "x:" << struct_test.x << endl;

	Derived_Class_Test derived_class_test;
	//	derived_class_test.x = 100;

	Derived_Struct_Test derived_struct_test;
	derived_struct_test.x = 100;
	cout << "x:" << derived_struct_test.x << endl;

	return 0;
}
