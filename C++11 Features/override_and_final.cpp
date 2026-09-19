#include <iostream>
using namespace std;

/**
    The `override` specifier in C++11 indicates that a member function is intended to override a base class function.
    The `final` specifier prevents further overriding of a virtual function or inheritance of a class.  
    These specifiers help improve code safety and clarity by explicitly stating the developer's intentions.
*/


class Base
{
public:
    virtual void show() {}
};

class Derived : public Base
{
public:
    void show() override {}
};


class FinalClass final{
//  This class cannot be inherited from because it is marked as `final`.
};



