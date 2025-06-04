/*
 * overloading_function_template.cpp
 *
 *  Created on: Aug 4, 2022
 *      Author: ssingh42
 */


/**
 * NOTES:
	In this video i have explained way to overload template function in c++. This is a great feature in c++ which helps to write generic programming.
 */

#include <iostream>
using namespace std;

template <class RT, class T1, class T2>
RT getMax(T1 x, T2 y){ // auto can be used instead of RT
	return x>y?x:y;
}

template <class T1, class T2>
auto getMax(T1 x, T2 y){
	return x>y?x:y;
}

int const& max(int const& x, int const& y){
	cout << "max(int,int)" << endl;
	return x>y?x:y;
}

template <class T>
T const& max(T const& x, T const& y){
	cout << "max(T,T)" << endl;
	return x>y?x:y;
}

template <class T>
T const& max(T const& x, T const& y, int const& z){
	cout << "max(T,T,T)" << endl;
	return max (max(x,y), z);
}

void overloading_function_template_main(){
	cout << getMax<double, int, int>(10,2) << endl;
	cout << getMax<char, char, char>('a','x') << endl;

	::max(10,20);
	::max<>(10,20);
	::max(10.0,20.0);
	::max<double>(10,20);
	::max(10,20,30);

}


