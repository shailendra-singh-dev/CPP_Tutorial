#include <iostream>
using namespace std;

/** Compiler automatically deduces the variable type.
	Reduces code verbosity.
	Useful with complex iterator types.
 */

void auto_type_deduction(){
	auto x = 10;        // int
	auto pi = 3.14;     // double
	auto name = "John"; // const char* 
	std::vector<int>::iterator it = v.begin();
	auto it = v.begin();	
}


