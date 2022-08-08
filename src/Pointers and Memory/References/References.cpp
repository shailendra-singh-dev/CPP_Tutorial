//============================================================================
// Name        : References.cpp
// Author      : Shailendra
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "references.h"

using namespace std;

void reference_variable() {
	int x = 10, y=20;
	int& ref = x;
	cout << ref;
	ref = y;
	cout << ref;
}

void modify_value(double& value) {
	cout << "modify_value() Original Value:" << value << endl;
	value = 100.999;
	cout << "modify_value() Modified Value:" << value << endl;
}

int References_main() {
	double value = 99.999;
	cout << "main() Original Value:" << value << endl;
	modify_value(value);
	cout << "main() Modified Value:" << value << endl;

	reference_variable();

	return 0;
}
