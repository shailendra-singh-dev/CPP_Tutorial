/*
 * template_specialization.cpp
 *
 *  Created on: Aug 5, 2022
 *      Author: ssingh42
 */

#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

/**
 * POINTS:
	1. Some time we have to specialize template for a particular data type.
	2. We can specialize both "function" and "class" template.
 *
 */


template <class T>
T addAll(vector<T> list){
	T sum=0;
	for(const T& element:list){
		sum += element;
	}
	return sum;
}

template <>
string addAll(vector<string> list){
	stringstream sum;
	for(const string& elementList:list){
		for(const char& element: elementList)
			sum << element;
	}
	return sum.str();
}

void template_specialization_main() {
	vector<int> vector = { 1, 2, 2, 2, 2, 2 };
	int sum = addAll(vector);
	cout << sum << endl;

	std::vector<double> vector2 = { 1.33, 2.44, 2.00, 2.11, 2.33, 2.656 };
	double sum2 = addAll(vector2);
	cout << sum2 << endl;

	std::vector<string> vector3= {"shailendra", "singh", "is" ,"engineer"};
	string sum3 = addAll(vector3);
	cout << sum3 << endl;
}

