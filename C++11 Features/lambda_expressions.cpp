#include <iostream>
using namespace std;

/**
	Lambda expressions allow the definition of anonymous functions.
	They can capture variables from the surrounding scope.
	Useful for short, inline functions, especially in algorithms.
	[x]    // by value
	[&x]   // by reference
	[=]    // all by value
	[&]    // all by reference
	
*/

void lambda_expressions(){
	auto sum = [](int a, int b) {
		return a + b ;
	};
	cout << sum(10,20) << endl;
}


