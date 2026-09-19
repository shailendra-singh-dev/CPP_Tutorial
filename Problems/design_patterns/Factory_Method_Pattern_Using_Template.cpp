#include <iostream>
#include <vector>
using namespace std;
#include <memory>

class Shape {
public:
    virtual void draw() = 0;
    virtual void print() = 0;
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
    void print() override {
        cout << "Circle print function" << endl;
    }
};

class Square : public Shape {
public: 
    void draw() override {
        cout << "Drawing Square" << endl;
    }
    void print() override {
        cout << "Square print function" << endl;
    }
};

template <typename T>
class ShapeFactory {    
public:
    static unique_ptr<T> createShape() {
        return make_unique<T>();
    }
};

void abstract_factory_method_pattern_using_template() {
    auto circle = ShapeFactory<Circle>::createShape();
    circle->print();
    auto square = ShapeFactory<Square>::createShape();
    square->print();
}

