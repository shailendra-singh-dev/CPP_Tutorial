#include <iostream>
using namespace std;

class Logger {
private:
    static Logger* instance;
    Logger() {} // Private constructor
    Logger (const Logger&) = delete; // Prevent copy-construction
    Logger& operator=(const Logger&) = delete; // Prevent assignment
    Logger(Logger&&) = delete; // Prevent move-construction
    Logger& operator=(Logger&&) = delete; // Prevent move-assignment

public:
    static Logger* getInstance() {
        if (instance == nullptr) {
            instance = new Logger();
        }
        return instance;
    }
};
//with thread safety in C++11 and later


void singleton_design_pattern_cpp() {
    Logger* logger1 = Logger::getInstance();
    Logger* logger2 = Logger::getInstance();

    if (logger1 == logger2) {
        cout << "Both loggers are the same instance." << endl;
    } else {
        cout << "Loggers are different instances." << endl;
    }
}