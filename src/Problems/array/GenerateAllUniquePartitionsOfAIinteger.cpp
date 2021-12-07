//============================================================================
// Name        : Practice.cpp
// Author      : Shailendra Singh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iostream>
#include <stdio.h>
#include <sstream>
#include <vector>
#include <set>
#include <map>
#include <list>
#include <string.h>
#include "string"
#include<set>
#include <iomanip>
#include <cmath>
#include <string>
#include <cstdarg>
#include <cstdio>
#include <string>
#include <cassert>

int countDigit(double n) {
  return floor(log10(n) + 1);
}

//missing string printf
//this is safe and convenient but not exactly efficient
inline std::string format(const char *fmt, ...) {
	int size = 512;
	char *buffer = 0;
	buffer = new char[size];
	va_list vl;
	va_start(vl, fmt);
	int nsize = vsnprintf(buffer, size, fmt, vl);
	if (size <= nsize) { //fail delete buffer and try again
		delete[] buffer;
		buffer = 0;
		buffer = new char[nsize + 1]; //+1 for /0
		nsize = vsnprintf(buffer, size, fmt, vl);
	}
	std::string ret(buffer);
	va_end(vl);
	delete[] buffer;
	return ret;
}

using namespace std;
set<int> setOfElements;

void addElements(int p[], int n) {
	int product = 1;
	for (int i = 0; i < n; i++) {
		product *= p[i];
	}
	setOfElements.insert(product);
}

string getRangeAverageMedian(long long n) {
	std::stringstream ss(stringstream::in | stringstream::out);
	int range = 0;
	double sum = 0.0;
	int setOfElementsSize = setOfElements.size();
	int array[setOfElementsSize];
	int index = 0;
	for (auto it = setOfElements.begin(); it != setOfElements.end(); it++) {
		sum += *it;
		array[index++] = *it;
	}
	index = -1;
	range = array[setOfElementsSize - 1] - array[0];
	ss << "Range: " << range;
	setOfElementsSize = sizeof(array) / sizeof(array[0]);
	double average = (double) sum / setOfElementsSize;
//	if(n == 40)
//		average += 0.02;
//	cout << "Average=" << average << ",setOfElementsSize=" << setOfElementsSize  << endl ;
//	ss << " Average: " << format("%.2f",average);
	cout << "Original Average: " << average << endl;
	ss << " Average: " << std::setprecision(10) << average;
//	ss << " Average: " << std::setprecision(3) << average;
	double median = 0.00f;
	if (setOfElementsSize % 2 != 0)
		median = (double) array[setOfElementsSize / 2];
	else
		median = (double) (array[(setOfElementsSize - 1) / 2] + array[setOfElementsSize / 2]) / 2.0;
	ss << " Median: " << format("%.2f", median);
	return ss.str();
}

void fetchUniqueParts(long long n) {
	int p[n];
	int k = 0;
	p[k] = n;

	while (true) {
		addElements(p, k + 1);
		int rem_val = 0;
		while (k >= 0 && p[k] == 1) {
			rem_val += p[k];
			k--;
		}

		if (k < 0)
			return;

		p[k]--;
		rem_val++;

		while (rem_val > p[k]) {
			p[k + 1] = p[k];
			rem_val = rem_val - p[k];
			k++;
		}

		p[k + 1] = rem_val;
		k++;
	}
}

std::string part(long long n) {
	fetchUniqueParts(n);
	return getRangeAverageMedian(n);
}

void test() {
	double num = 2.25149;
	std::stringstream ss(stringstream::in | stringstream::out);
	ss << std::setprecision(10) << num << endl;
	ss << std::setprecision(5) << num << endl;
	ss << std::setprecision(countDigit(num) + 2) << num << endl;
	cout << ss.str() << endl;
}

// Driver program to test above functions
int GenerateAllUniquePartitionsOfAIinteger_main() {
//	cout << "All Unique Partitions of 2 \n";
//	printAllUniqueParts(2);
//	string ouput =printRangeAverageMedian();
//	cout << "Final output:" << ouput;
//	cout << "\nAll Unique Partitions of 3 \n";
//	printAllUniqueParts(3);
//
//	cout << "\nAll Unique Partitions of 4 \n";
//	printAllUniqueParts(4);
//
//	cout << "\nAll Unique Partitions of 4 \n";
//	printAllUniqueParts(5);
	int num = 2;
	cout << part(num) << endl;

//	cout << countDigit(85158.49) << endl;

//	test();

//	std::string mystr = format("%.2f",10.5);
//	cout <<mystr <<endl;

//	auto rounded = roundoff(100.123456, 3);
//	cout << rounded <<endl;

	return 0;
}

