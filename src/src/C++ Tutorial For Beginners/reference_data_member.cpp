/*
 * reference_data_member.cpp
 *
 *  Created on: Jul 16, 2022
 *      Author: ssingh42
 */

#include <iostream>
using namespace std;

void reference_data_member_scope();

/**
 * NOTES
	1. Use when you are OK with your data member can be changed without your knowledge.
	2. Use when you don't need to impliment assignment operator in your class (this is restriction).
       if OK with, the contained object is not owned by the containing object and thus their lifetimes are not bound.
       You need to ensure that the referred object is guaranteed to exist till your class object exists.
 */

class ReferenceDataMember {
private:
	int &x;

public:
	ReferenceDataMember(int& y):x(y) {
	}

	ReferenceDataMember& operator = (const ReferenceDataMember& obj) {
		x = obj.x;
		return *this;
	}

	void print() {
		cout << x << endl;
	}
};

void reference_data_member_scope() {
	int* i = new int(10);
	ReferenceDataMember obj(*i);
	obj.print();

	delete i;
	obj.print();
}

void reference_data_member_main() {
	int x = 10;
	ReferenceDataMember obj(x);
	obj.print();

	x = 20;
	obj.print();

	int y = 30;
	ReferenceDataMember obj2(y);
	obj2 = obj;

	obj2.print();

	reference_data_member_scope();
}


