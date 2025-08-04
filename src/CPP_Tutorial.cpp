//============================================================================
// Name        : CPP_Tutorial.cpp
// Author      : Shailendra Singh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "vector"
#include <iostream>
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
int main(int argc, char **argv) {
	StaticClass::print();		
	return 0;
}