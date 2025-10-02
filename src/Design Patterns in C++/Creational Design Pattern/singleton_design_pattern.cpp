#include <iostream>
#include <mutex>
#include <thread>
using namespace std;

class Logger {
private:
    static Logger* instance;
    // For thread-safe version
    static std::once_flag flag;
    static mutex mtx;

    // Private constructor
    Logger() {
        cout << "Logger instance created by thread " << this_thread::get_id() << endl;
    }
    Logger (const Logger&) = delete; // Prevent copy-construction
    Logger& operator=(const Logger&) = delete; // Prevent assignment
    Logger(Logger&&) = delete; // Prevent move-construction
    Logger& operator=(Logger&&) = delete; // Prevent move-assignment

public:
    // Different ways to implement Singleton pattern

    //with thread safety in C++11 and later
    /**  1. Using local static variable
      Preferred (C++11 and above): The static local variable version → 
      simpler, safe, automatic cleanup.
     */ 
    static Logger* getInstance() {
        static Logger instance;
        return &instance;
    }       
};

static Logger* instance1 = nullptr;
static Logger* instance2 = nullptr;

void singleton_design_pattern_cpp() {

    thread t1([&]() { 
        instance1 = Logger::getInstance(); 
    });
    thread t2([&]() { 
        instance2 = Logger::getInstance(); 
    });

    t1.join();
    t2.join();
    if (instance1 == instance2) {
        cout << "Both loggers are the same instance." << endl;
    } else {
        cout << "Loggers are different instances." << endl;
    }
}