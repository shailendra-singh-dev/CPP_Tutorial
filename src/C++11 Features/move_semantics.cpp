#include <iostream>
using namespace std;

/**
	Move semantics allow the resources of one object to be moved to another.
	Useful for optimizing performance by avoiding unnecessary deep copies.
*/

void move_semantics(){
	string s1 = "Hello";
    string s2 = std::move(s1);
}


