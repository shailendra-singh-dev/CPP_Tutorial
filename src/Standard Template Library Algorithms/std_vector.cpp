/*
 * std_vector.cpp
 *
 *  Created on: Feb 28, 2023
 *      Author: ssingh42
 */

/**
 * Points:
 * 	In this video we will learn how what is the use of std vector in cpp programming language and few points are as follows:
	1. std::vector is a sequence container and also known as Dynamic Array or Array List.
	2. Its size can grow and shrink dynamically, and no need to provide size at compile time.

	ELEMENT ACCESS
	at(), [], front(), back(), data()

	MODIFIERS:
	insert(), emplace(), push_back(), emplace_back(), pop_back(), resize(), swap(), erase(), clear()
 *
 */

#include "iostream"
#include "vector"

using namespace std;

void std_vector_main() {
	//Declarations.
	std::vector<int> vec1;
	std::vector<int> vec2(5, 10); //size, initialize with.
	std::vector<int> vec3 = { 1, 2, 3, 4, 5 };
	std::vector<int> vec4 {10, 20, 30};

	for (std::vector<int>::iterator it = vec4.begin(); it != vec4.end(); it++) {
		cout << *it << endl;
	}

	for (auto element : vec4) {
		cout << element << endl;
	}

	cout << vec3.at(3) << endl;
	cout << vec3[4] << endl;
	cout << vec3.front() << endl;
	cout << vec3.back() << endl;
	cout << vec3.data() << endl;

	std::vector<int> obj;
	//obj.reserve(10);
	for(int i=0;i<10;i++){
		obj.push_back(i*100);
		cout << "Size:" << obj.size() << ",Capacity:" << obj.capacity() << endl;
	}
}
