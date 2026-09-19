#include <iostream>
using namespace std;

/**
	Enums in C++11 can be strongly typed using the enum class keyword.
	They provide better type safety and scoping compared to traditional enums.
    Avoids namespace pollution.
*/

void enums(){
	// Example of a strongly typed enum.
	enum class Color { Red, Green, Blue };
	Color c = Color::Red;
}


