#include <iostream>
using namespace std;

/**
    Variadic templates in C++11 allow functions and classes to accept a variable number of template arguments.
    They provide a way to write more flexible and reusable code.
*/

// Example of a variadic template function.
template<typename T>
void print(T t)
{
    cout << "print(T t) called with : " << t << endl;
}

template<typename T, typename... Args>
void print(T t, Args... args)
{
    cout << "print(T t, Args... args) called with : " << t << " ";
    print(args...);
}

void variadic_templates()
{
    print(1);
    print(1, 2, 3);
    print("Hello", "World", 123);
}


