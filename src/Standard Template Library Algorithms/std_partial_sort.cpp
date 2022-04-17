/*
 * std_partial_sort.cpp
 *
 *  Created on: 17-Apr-2022
 *      Author: swati
 */

#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>

using namespace std;

void std_partial_sort_main() {
	std::vector<int> vec { 3, 0, -1, 5, 10 };
	//Sort entire vector excluding middle element.
	cout << "std_partial_sort_main:" << " ";
	std::partial_sort(vec.begin(), vec.begin() + 3, vec.end());
	for (auto element : vec) {
		cout << element << " ";
	}
	//Using comparator Less
	cout << endl;
	cout << "std_partial_sort_main, comparator less:" << " ";
	std::partial_sort(vec.begin(), vec.begin() + 3, vec.end(),std::less<int>());
	for (auto element : vec) {
		cout << element << " ";
	}
	cout << endl;
	cout << "std_partial_sort_main, comparator greater:" << " ";
	//Using comparator Greater
	std::partial_sort(vec.begin(), vec.begin() + 3, vec.end(),std::greater<int>());
	for (auto element : vec) {
		cout << element << " ";
	}
}

