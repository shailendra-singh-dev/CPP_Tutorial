#include <iostream>
using namespace std;


/**
        Constructor inheritance in C++11 allows a derived class to inherit constructors from its base class.
        It helps to reduce boilerplate code when the derived class does not need to define its own constructors.
*/
class Base {
public:
    Base(int value) {
        cout << "Base constructor called with value: " << value << endl;
    }
};

class Derived : public Base {
public:
    using Base::Base; // Inherit constructors from Base
};

void constructor_Inheritance(){
    Derived d1(42); // Calls inherited constructor from Base
}


