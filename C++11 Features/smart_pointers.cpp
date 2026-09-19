#include <iostream>
using namespace std;

void smart_pointers(){
    //unique pointer, Single owner.
    std::unique_ptr<int> p(new int(10));
    //shared pointer, Multiple owners.
    std::shared_ptr<int> p1(new int(10));
    std::shared_ptr<int> p2 = p1;
    //weak pointer, Non-owning reference.
    std::weak_ptr<int> wp = p1;
}

