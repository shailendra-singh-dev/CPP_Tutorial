/*
 * std_sort.cpp
 *
 *  Created on: 17-Apr-2022
 *      Author: swati
 */

#include <iostream>
#include <algorithm>
//#include <execution>
#include <vector>
#include <sstream>

using namespace std;

// 1. Sorting Integral data types.
void std_sort_builtin_types_main() {
	std::vector<int> vec { 3, 0, -1, 5, 10 };
//	std:sort(std::execution::par, vec.begin(),vec.end()); //Found in C++14.
	std::sort(vec.begin(), vec.end());
	for (auto element : vec) {
		cout << element << endl;
	}
}

// 2.Sorting user defined data types.
class Point {
public:
	int x;
	int y;

	Point(int x = 0, int y = 0) :
			x(x), y(y) {
	}

	bool operator <(const Point &obj) {
		return (x + y) < (obj.x + obj.y);
	}

};

void std_sort_custom_types() {
	std::vector<Point> vec { { 10, 4 }, { 4, 2 }, { 1, 0 } };
	std::sort(vec.begin(), vec.end());
	for (auto element : vec) {
		cout << element.x << " " << element.y << endl;
	}
}

//3. Sort using a function object.
struct SortType {
	bool operator()(int a, int b) const {
		return a < b;
	}
};

void std_sort_using_function_object() {
	std::vector<int> vec { 3, 0, -1, 5, 10 };
	SortType sorttype;
	std::sort(vec.begin(), vec.end(), sorttype);
	for (auto element : vec) {
		cout << element << " ";
	}
}

//4. Sort using a lambda expression.
void std_sort_using_lambda_expression() {
	cout << "std_sort_using_lambda_expression:";
	std::vector<int> vec { 3, 0, -1, 5, 10 };
	std::sort(vec.begin(), vec.end(), [](int x, int y) {
		return x < y;
	});
	for (auto element : vec) {
		cout << element << " ";
	}
	cout<< endl;
	cout << "std_sort_using_lambda_expression std::less<int>():";
	std::sort(vec.begin(), vec.end(), std::less<int>());
	for (auto element : vec) {
		cout << element << " ";
	}
	cout<< endl;
	cout << "std_sort_using_lambda_expression std::greater<int>():";
	std::sort(vec.begin(), vec.end(), std::greater<int>());
	for (auto element : vec) {
		cout << element << " ";
	}

}
