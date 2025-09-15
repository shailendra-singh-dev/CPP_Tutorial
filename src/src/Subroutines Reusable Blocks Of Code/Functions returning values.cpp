//============================================================================
// Name        : Functions.cpp
// Author      : Shailendra
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Subroutines_Reusable_Blocks_Of_Code.h"

using namespace std;
using namespace Functions_returning_values;

void Functions_returning_values::showMenu() {
	cout << "!!!Enter 1 for view!!!" << endl;
	cout << "!!!Enter 2 for search!!!" << endl;
	cout << "!!!Enter 2 for quit!!!" << endl;
}

int Functions_returning_values::processSelection() {
	cout << "!!!Enter selection!!!" << endl;
	int selection;
	cin >> selection;
	return selection;
}

int Functions_returning_values_main() {
	showMenu();

	int selection = processSelection();
	switch (selection) {
	case 1:
		cout << "!!!Viewing !!!" << endl;
		break;

	case 2:
		cout << "!!! Searching !!!" << endl;
		break;

	case 3:
		cout << "!!!Quitting !!!" << endl;
		break;

	default:
		cout << "!!!Invalid selection !!!" << endl;
		break;
	}
	return 0;
}
