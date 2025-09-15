//============================================================================
// Name        : Comparing.cpp
// Author      : Shailendra
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>

using namespace std;

int Comparing_Floats_main() {
	float i = 1.1;
	if (i < 1.1) {
		cout << "!!!Equal!!!" << endl;
	} else {
		cout << "!!!Not Equal!!!" << endl;
	}

	cout << setprecision(10) << i << endl;

	return 0;
}
