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



int main(int argc, char **argv) {
	/**
	 int val = sample(10);
	 cout << val << endl;

	 MyFunctor myFunctor;
	 int value = myFunctor(20);
	 cout << value << endl;
	 int c =10;
	 //lambda functions	https://stackoverflow.com/questions/356950/what-are-c-functors-and-their-uses
	 auto add = [c](int a, int b){
	 return a+b+c;
	 };
	 cout << add(10,20) << endl;

	 **/

	return 0;

}

class StreamInsertion {
public:
int value;
  StreamInsertion(int val):value{val}{
  }

  friend istream& operator>>(istream& input, StreamInsertion& obj) {
	input >> obj.value;
	return input;
  }
  
}

