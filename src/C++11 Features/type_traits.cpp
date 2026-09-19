#include <iostream>
using namespace std;
#include <type_traits>

/**
    Type traits in C++11 provide a way to query and manipulate type information at compile time.
    They are defined in the <type_traits> header.
*/

void type_traits_main() {
    cout << is_integral<int>::value;
}
