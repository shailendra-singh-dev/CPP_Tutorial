//============================================================================
// Name        : This.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Person.h"

using namespace std;
using namespace The_This_Keyword;

int This_Keyword_main() {
	Person person;
	cout << "Address of object person:" << &person << " in main()" << endl;

	Person person1("Person1");
	cout << "Address of object person1:" << &person1 << " in main()" << endl;

	Person person2("Person2", 60);
	cout << "Address of object person2:" << &person2 << " in main()" << endl;
	return 0;
}
