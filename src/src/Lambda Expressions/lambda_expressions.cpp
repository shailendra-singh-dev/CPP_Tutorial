/*
 * lambda_expressions.cpp
 *
 *  Created on: 18-Apr-2022
 *      Author: swati
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>
#include <ctime>
#include <cmath>


using namespace std;

#define MIN 1
#define MAX 5

std::vector<int> getRandomNumbersVector(int min, int max) {
	std::vector<int> vec;
	for (int i = min; i <= max; i++) {
		vec.push_back(min + i * std::rand());
	}
	return vec;
}

void lambda_expressions_sort() {
	std::vector<int> vec = getRandomNumbersVector(MIN, MAX);
//	std::sort(vec.begin(), vec.end()); //Without lambda, default
	std::sort(vec.begin(), vec.end(), [](int x, int y) {
		return x > y;
	});
	for (auto element : vec) {
		cout << element << " ";
	}
}

void lambda_expressions_copy_if() {
	std::vector<int> vec = getRandomNumbersVector(MIN, MAX);
	std::vector<int> evenVec;
	std::copy_if(vec.begin(), vec.end(), std::back_inserter(evenVec),
			[](int x) {
				return x % 2 == 0;
			});
	for (auto element : evenVec) {
		cout << element << " ";
	}
}

void lambda_expressions_copy_if_divisor() {
	std::vector<int> vec = getRandomNumbersVector(MIN, MAX);
	for (auto element : vec) {
		cout << element << " ";
	}
	cout << endl;
	std::vector<int> divisorVec;
	int divisor = 0;
	cin >> divisor;
	std::copy_if(vec.begin(), vec.end(), std::back_inserter(divisorVec),
			[divisor](int x) {
				return x % divisor == 0;
			});
	for (auto element : divisorVec) {
		cout << element << " ";
	}
}

void lambda_expressions_for_each() {
	std::vector<int> vec = getRandomNumbersVector(MIN, MAX);
	std::vector<int> evenVec;
	int sum;
	std::for_each(vec.begin(), vec.end(), [&](int x) {
		sum += x;
	});
	cout << "Sum:" << sum << endl;
}

void lambda_expressions_for_each_double() {
	std::vector<int> vec = getRandomNumbersVector(MIN, MAX);
	for (auto element : vec) {
		cout << element << " ";
	}
	cout << endl;
	std::vector<int> doubleVec;
	std::for_each(vec.begin(), vec.end(), [&](int x) {
		doubleVec.push_back(x * 2);
	});
	for (auto element : doubleVec) {
		cout << element << " ";
	}
}

void lambda_expressions_sum_vector() {
	std::vector<int> vector1 = getRandomNumbersVector(MIN, MAX);
	for (auto element : vector1) {
		cout << element << " ";
	}
	cout<<endl;
	std::vector<int> vector2 = getRandomNumbersVector(MIN, MAX);
	for (auto element : vector2) {
		cout << element << " ";
	}
	cout<<endl;
	std::vector<int> vector3(MAX-MIN +1);
	transform(vector1.begin(), vector1.end(), vector2.begin(), vector3.begin(),
			[](int x, int y) {
				return x + y;
			});
	for (auto element : vector3) {
		cout << element << " ";
	}
}

void lambda_expressions_recusrive(){
	// Recursive Lambda to calculate Fibonacci Numbers
//	std::function<int(int)> Fib = [&Fib](int n) {
//		return n < 2 ? n : Fib(n - 1) + Fib(n - 2);
//	};

//	cout << Fib(4) << endl;
}

void lambda_expressions_main() {
	lambda_expressions_sum_vector();
}
