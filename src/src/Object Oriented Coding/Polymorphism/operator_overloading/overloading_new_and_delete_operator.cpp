/*
 * overloading_new_and_delete_operator.cpp
 *
 *  Created on: Jul 30, 2022
 *      Author: ssingh42
 */

/**
 *
 POINTS:
	 1 There are two different types of overloading.
		 a. Local Overloading (class/struct)
		 b. Global Overloading
	 2. Syntax for Overloading operator new
	 void* operator new (size_t size);
	 3. Syntax for Overloading operator delete
	 void operator delete(void*);
	 4. Both new and delete operator are static members functions. So they don't have access to this pointer (we don't have to write static keyword it is automatically static).
	 5. Don't forget to overload for array version of both (new/delete).
	 6. We can have multiple overloaded new/delete operator functions.
 *
 *
 */

#include <iostream>
using namespace std;

class Test {
	int x;

public:
	Test(int x = 0) :
			x(x) {
	}

	void* operator new(size_t size) {
		cout << "overloading operator new within class" << endl;
		void* p = malloc(size);
		return p;
	}

	void operator delete(void* p) {
		cout << "overloading operator delete within class" << endl;
		free(p);
	}
};

void* operator new(size_t size) {
	cout << "overloading operator new outside class " << endl;
	void* p = malloc(size);
	return p;
}

void* operator new(size_t size, int val) {
	cout << "overloading operator with new, val outside class " << endl;
	void* p = malloc(size);
	if(p != nullptr)
		*static_cast<int*>(p)=val;
	return p;
}

void operator delete(void* p) {
	cout << "overloading operator delete outside class" << endl;
	free(p);
}

void* operator new[](size_t size) {
	cout << "overloading operator new[] outside class " << endl;
	void* p = malloc(size);
	return p;
}

void operator delete[](void* p) {
	cout << "overloading operator delete[] outside class" << endl;
	free(p);
}

void overloading_new_and_delete_operator_main() {
	Test* test = new Test(10);
	delete test;
	int* intVal = new int(1000);
	delete intVal;
	int* intValArray = new int[10];
	delete[] intValArray;
}

