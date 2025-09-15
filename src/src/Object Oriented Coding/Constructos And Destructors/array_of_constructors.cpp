/*
 * array_of_constructors.cpp
 *
 *  Created on: Feb 13, 2023
 *      Author: ssingh42
 */


#include "iostream"
#include "vector"

using namespace std;


class Foo{
public:
	Foo(int x, int y){
		cout << "Foo:x=" << x<< endl;
		cout << "Foo:y=" << y<< endl;
	}
};

class Bar{
public:
	Bar(int x, int y){
		cout << "Bar:x=" << x<< endl;
		cout << "Bar:y="<< y<< endl;
	}
};

void array_of_constructors_main(){
	// Will not compile because there are no default constructors.
	//Foo arr[2];
	//Foo* obj= new Foo[5];

	// Array of Non-default constructor
	Bar objects[5] = {Bar(1,2), Bar(1,2), Bar(1,2), Bar(1,2), Bar(1,2)};

	// Vector of Foo
	vector<Foo> listOfFoo(10, Foo(4,5));

	// Vector of Bar
	vector<Bar> listOfBar;
	for(int i=0;i<5;i++){
		Bar obj(10*i, 20*i);
		listOfBar.push_back(obj);
	}

}
