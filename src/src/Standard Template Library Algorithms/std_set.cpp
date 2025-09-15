/*
 * std_set.cpp
 *
 *  Created on: Mar 1, 2023
 *      Author: ssingh42
 */

/**
 * Points:
    1. std::set is an Associative Container that contains a sorted set of unique objects of type Key.
	2. It is usually implemented using Red-Black Tree.
	3. Insertion, Removal, Search have logarithmic complexity.
	4. If we want to store user defined data type in set then we will have to provide
	   compare function so that set can store them in sorted order.
	5. We can pass the order of sorting while constructing set object.

	BOTTOM LINE:
	It store unique elements and they are stored in sorted order (A/D)
 *
 */


#include <iostream>
#include <algorithm>
#include <execution>
#include <set>
#include <sstream>

using namespace std;


class Person{
public:
	int age;
	string name;
	Person(int age, string name):age(age), name(name){
	}
	int operator < (const Person& obj) const{
		return age< obj.age;
	}
	int operator >(const Person& obj) const {
		return age > obj.age;
	}
};
void std_set_main() {
	std::set<int, std::greater<int>> obj = { 10, 3, 4, 2, 1, -1, 0 };
	for (auto& e : obj) {
		cout << e << endl;
	}

	std::set<Person> obj2 = {
			{ 34, "Shailendra" },
			{ 40,     "Singh" },
			{ 50, "Sanjay" },
			{ 60, "Swati" } };
	for (auto& e : obj2) {
		cout << e.age << "," << e.name << endl;
	}
	std::set<Person, std::greater<Person>> obj3 = {
			{ 34, "Shailendra" },
			{ 40, "Singh" },
			{ 50, "Sanjay" },
			{ 60, "Swati" }
	};
	for (auto& e : obj3) {
		cout << e.age << "," << e.name << endl;
	}

}



