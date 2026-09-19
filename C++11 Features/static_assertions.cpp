#include <iostream>
using namespace std;

/**
	Static assertions in C++11 allow compile-time checks using the static_assert keyword.
    They help catch errors early and improve code safety.
*/

void static_assertions(){
	// Example of a static assertion.
	//Compilation fails if condition is false.
	static_assert(sizeof(int) == 4, "Integers must be 4 bytes");
}


