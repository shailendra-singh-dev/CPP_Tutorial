/*
 * this_pointer.cpp
 *
 *  Created on: Jul 17, 2022
 *      Author: ssingh42
 */

#include <iostream>
using namespace std;

/*
 * NOTES:
	0. this pointer is used to hold the address of current object (using which we have called particular member function).
	1. this pointer is a const pointer.
	2. this pointer is passed as a hidden argument to non-static member functions.
	3. Compiler automatically changes all data member access with this pointer.
	4. It is not passed in static member functions.
 */

class ThisPointer {
private:
	int x;
public:
	int getX() {
		return this->x;
	}

	/* Complier converted.
	int getX(ThisPointer* const this) {
		return this->x;
	}
	*/

	void setX(int x) {
		this->x = x;
	}

	/* Complier converted.
	int setX(ThisPointer* const this, int x) {
		return this->x;
	}
	*/
};

void this_pointer_main() {
	ThisPointer obj;
	cout << obj.getX() << endl;
	obj.setX(20);
}
