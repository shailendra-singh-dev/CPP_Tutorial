#include <iostream>
using namespace std;

class Logger {
private:
    static Logger* instance;
    Logger() {} // Private constructor
public:
    static Logger* getInstance() {
        if (!instance) {
            instance = new Logger();
        }
        return instance;
    }
};
void singleton_design_pattern_cpp() {
    Logger* logger1 = Logger::getInstance();
    Logger* logger2 = Logger::getInstance();

    if (logger1 == logger2) {
        cout << "Both loggers are the same instance." << endl;
    } else {
        cout << "Loggers are different instances." << endl;
    }
}