/**
 * https://www.geeksforgeeks.org/system-design/prototype-pattern-c-design-patterns/
 * 
 * #ChatGPT
 * Create new objects by copying existing ones (prototypes), instead of creating them from scratch.
   Useful when:
    Object creation is expensive.
    You want to avoid subclassing a factory.
    You need to clone objects at runtime.
 */

using namespace std;
#include <iostream>
#include <memory>

class IPowerDaemon {
public:
    virtual unique_ptr<IPowerDaemon> clone() const = 0;
    virtual void start() = 0;
    virtual void stop() = 0;
    virtual void info() = 0;
};

class HalyeTekPowerDaemon : public IPowerDaemon {
public:
    unique_ptr<IPowerDaemon> clone() const override {
        return make_unique<HalyeTekPowerDaemon>(*this);
    }

    void start() override {
        cout << "HalyeTek Power Daemon started." << endl;
    }

    void stop() override {
        cout << "HalyeTek Power Daemon stopped." << endl;
    }

    void info() override {
        cout << "HalyeTek Power Daemon information." << endl;
    }
};
class VolvoCarsPowerDaemon : public IPowerDaemon {
public:
    unique_ptr<IPowerDaemon> clone() const override {
        return make_unique<VolvoCarsPowerDaemon>(*this);
    }               
    void start() override {
        cout << "VolvoCars Power Daemon started." << endl;
    }

    void stop() override {
        cout << "VolvoCars Power Daemon stopped." << endl;
    }

    void info() override {
        cout << "VolvoCars Power Daemon information." << endl;
    }
};

void prototype_pattern_cpp() {
    unique_ptr<IPowerDaemon> halyeTekPrototype = make_unique<HalyeTekPowerDaemon>();
    unique_ptr<IPowerDaemon> volvoCarsPrototype = make_unique<VolvoCarsPowerDaemon>();

    unique_ptr<IPowerDaemon> halyeTekClone = halyeTekPrototype->clone();
    unique_ptr<IPowerDaemon> volvoCarsClone = volvoCarsPrototype->clone();

    halyeTekClone->start();
    halyeTekClone->info();
    halyeTekClone->stop();

    volvoCarsClone->start();
    volvoCarsClone->info();
    volvoCarsClone->stop();
}