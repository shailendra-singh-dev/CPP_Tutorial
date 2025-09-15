//============================================================================
// Name        : CPP_Tutorial.cpp
// Author      : Shailendra Singh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "vector"
#include <iostream>
#include <functional>
#include <memory>
using namespace std;

class A {
private:
	int x;
public:
	A(int x):x{x}{
	}
	int getX(){
		return x;
	}
	friend void accessX(A& a);
	friend class B;
	A getObj(){
		return {10000};
	}	
};

class B{
public:
	int getX(A& a){
		return a.x;
	}
};

void accessX(A& a){
	cout << a.x << endl;
}

struct Sample {
	int operator()(int x) {
		return x;
	}
} sample;

class MyFunctor {
public:
	int operator()(int x) {
		return x;
	}
};

auto add = [](int a, int b) {
	return a + b;
};


class StreamInsertion {
private:
	int value;
public:
  StreamInsertion(int val):value{val}{
  }
public:
  friend istream& operator >> (istream& input, StreamInsertion& obj);
  friend ostream& operator << (ostream& output, StreamInsertion& obj);  
};

istream& operator >>(istream& input, StreamInsertion& obj){
	input >> obj.value;
	return input;
}

ostream& operator <<(ostream& output, StreamInsertion& obj) {
	output << obj.value;
	return output;
}

void sort_vector(){
	vector<int> vec {10,20,30,40,50,60,70,80,90,100};
	std::sort(vec.begin(),vec.end(), [] (int x,int y){
		return x> y;
	});
	for(const auto it: vec){
		cout << it << " " << endl;
	}
}
class FinalClass {
	public:
		friend class Base; 
};
class Base : virtual public FinalClass {
private:	
	Base(){		
	}	
};

class Derived : public Base{
};

class C{
private:
	int x;
public:
	C() : x(0) {
		cout << "C's default constructor called" << endl;
	}
	C(int x) {
		cout << "C's parameterized constructor called with value: " << x << endl;
		this->x = x;
	}
};

class D: public C{
public:
	D():C() {
		cout << "D's constructor called" << endl;
	}
	D(int y):C(y) {
		cout << "D's parameterized constructor called with value: " << y << endl;
	}
};
class BaseClass {
public:
	virtual void print() {
		cout << "Base class print function" << endl;
	}
	virtual void display() = 0;
	virtual ~BaseClass(){
		cout << "Base class destructor called" << endl;
	}
};

class DerivedClass: public BaseClass {
public:
	/**The 'override' keyword helps prevent accidental mismatches 
	 * between base class and derived class functions, 
	 * reducing the risk of unintended behavior or errors */
	void print() override {
		cout << "Derived class print function" << endl;
	}
	void display() override {
		cout << "Derived class display function" << endl;
	}
	~DerivedClass(){
		cout << "Derived class destructor called" << endl;
	}
};

class AAA {
private:
	int x;
public:
	AAA(int x=0) {		
		this->x = x;
	}
	AAA operator +(const AAA& obj) {
		AAA aaa;
		aaa.x = obj.x + x;
		return aaa;
	}
	
	void print() {
		cout << "AAA object with value: " << x << endl;
	}
};

class Copy{
public:
int x;
	Copy() : x(0) {
		cout << "Default constructor called" << endl;
	}
	Copy(const Copy& other) :x(other.x) {
		cout << "Copy constructor called" << endl;
	}
};

class DeleteThis {
public:
	void call_delete_this() {
		cout <<"DeleteThis:call_delete_this()"<<endl;
		delete this;
	}
};
class SamplePtr {
public:
	SamplePtr() {
		cout << "Sample constructor called" << endl;
	}
	~SamplePtr() {
		cout << "Sample destructor called" << endl;
	}
};
class MyFunctorClass{
public:
	int operator()(int x) {
		return x * 2;
	}
};

class Logger {
private:
	static Logger* instance;
	Logger(){}
public:
    static Logger* getInstance(){
		if(!instance){
			instance = new Logger();
		}
		return instance;
	}
	void log(const string& message) {
		cout << "Log: " << message << endl;
	}
};

class Toy{
protected:
	string 
public:

}

int main(int argc, char **argv) {
	/**
	unique_ptr<SamplePtr> samplePtr = make_unique<SamplePtr>();	
	SamplePtr* rawPtr = samplePtr.get();
	cout << "Raw pointer value: " << rawPtr << endl;
	
	shared_ptr<SamplePtr> sharedPtr = make_shared<SamplePtr>();
	cout << "Shared pointer use count: " << sharedPtr.use_count() << endl;
	shared_ptr<SamplePtr> sharedPtr2 = sharedPtr; // Copying shared pointer
	cout << "Shared pointer use count after copy: " << sharedPtr.use_count() << endl;

	weak_ptr<SamplePtr> weakPtr(sharedPtr); // Creating a weak pointer
	cout << "Weak pointer use count: " << weakPtr.use_count() << endl;	
	
	MyFunctorClass obj;
	cout << obj(10) << endl;
	return 0;
	*/

	Logger* Logger::instance = nullptr;

}



