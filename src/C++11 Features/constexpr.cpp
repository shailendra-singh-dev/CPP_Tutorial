#include <iostream>
using namespace std;

/**
	Constexpr allows the evaluation of functions and variables at compile time.
	It is represented by the constexpr keyword.
*/

constexpr int square(int x) {
	return x * x;
}

void constexpr_(){
	constexpr int result = square(5);
	cout << result << endl;
}


