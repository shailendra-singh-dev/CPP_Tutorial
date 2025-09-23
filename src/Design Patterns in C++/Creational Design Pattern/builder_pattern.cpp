/**
 * https://www.geeksforgeeks.org/system-design/builder-pattern-c-design-patterns/
 * 
 * The builder pattern is defined as a creational design pattern that separates the construction of a complex object 
 * from its representation, allowing us to create different representations of an object using the same construction 
 * process. It's beneficial when an object has many optional properties or configurations.
 *  
 **/
/** ChatGPT
     Separate the construction of a complex object from its representation so that the same construction process 
 *   can create different representations.
 * 
     Flexibility: Build different variations of an object using the same interface.
     Separation of Concerns: Construction logic is separated from representation.   
     Reusability: Same director can be used with different builders.
 */

#include <iostream>
#include <string>
using namespace std; 
class Car {
private:
     string engine;
     string wheels;
     string color;
public:
     Car(string e, string w, string c) : engine(e), wheels(w), color(c) {}
     void displayInfo() {
         cout << "Engine: " << engine << ", Wheels: " << wheels << ", Color: " << color << endl;
     }
};

class Builder {
public:
    virtual void setEngine(string engine) = 0;
    virtual void setWheels(string wheels) = 0;
    virtual void setColor(string color) = 0;
    virtual Car* getCar() = 0;    
};

class SportsCarBuilder : public Builder {
private:
    Car* car;
public:
    SportsCarBuilder() {
        car = new Car("", "", "");
    }
    void setEngine(string engine) override {
        car->engine = engine;
    }
    void setWheels(string wheels) override {
        car->wheels = wheels;
    }
    void setColor(string color) override {
        car->color = color;
    }
    Car* getCar() override {
        return car;
    }
};

class CarDirector {
public:    
    Car* constructCar(Builder* builder) {        
        return builder->getCar();
    }
};

int main() {
    SportsCarBuilder* sportsCarBuilder = new SportsCarBuilder();
    sportsCarBuilder->setEngine("V8");
    sportsCarBuilder->setWheels("18 inch Alloy Wheels");
    sportsCarBuilder->setColor("Red");
    CarDirector* director = new CarDirector();
    Car* car = director->constructCar(sportsCarBuilder);
    car->displayInfo();
    delete car;
    delete director;
    delete sportsCarBuilder;
    return 0;
}