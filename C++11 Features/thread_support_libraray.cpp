#include <iostream>
using namespace std;
#include <thread>

/**
    The thread support library in C++11 provides classes and functions for multithreading.
    It includes the `std::thread` class for creating and managing threads, as well as synchronization primitives like `std::mutex` and `std::lock_guard`.
    This library helps in writing concurrent programs more easily and safely.
    
    Also introduced:
    std::mutex
    std::condition_variable
    std::future
    std::async
*/
#include <thread>

void display()
{
    cout << "Thread running";
}

int main()
{
    thread t(display);
    t.join();
}


