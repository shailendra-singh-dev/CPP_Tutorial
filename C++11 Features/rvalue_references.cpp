#include <iostream>
using namespace std;

/**
		Rvalue references allow the binding of a reference to a temporary object (rvalue).
		Useful for implementing move semantics and perfect forwarding.
*/

void rvalue_references(){
	int x = 10;
	int &&rref = 20; // rvalue reference to a temporary
	rref = x + 5;    // can bind to an rvalue   
    cout << "rref: " << rref << endl;
}

void func(string&& str)
{
    cout << str;
}

