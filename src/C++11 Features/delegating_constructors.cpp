#include <iostream>
using namespace std;

/** 
	Delegating constructors in C++11 allow one constructor to call another constructor within the same class.
	It helps to reduce code duplication and improve maintainability.
*/

class Example {
public:
    Example() : Example(0) { // Delegating constructor
        cout << "Default constructor called" << endl;
    }

    Example(int value) {
        cout << "Parameterized constructor called with value: " << value << endl;
    }
};

void delegating_constructors(){
    Example e1;        // Calls default constructor, which delegates to parameterized constructor
    Example e2(42);    // Calls parameterized constructor directly
}




