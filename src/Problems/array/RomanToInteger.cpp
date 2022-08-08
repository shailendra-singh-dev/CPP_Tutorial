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

// This function returns value
// of a Roman symbol
int value(char r) {
	if (r == 'I')
		return 1;
	if (r == 'V')
		return 5;
	if (r == 'X')
		return 10;
	if (r == 'L')
		return 50;
	if (r == 'C')
		return 100;
	if (r == 'D')
		return 500;
	if (r == 'M')
		return 1000;

	return -1;
}

// Returns decimal value of
// roman numaral
int decode(const std::string &roman) {
	// Initialize result
	int res = 0;

	// Traverse given input
	for (int i = 0; i < roman.length(); i++) {
		// Getting value of symbol s[i]
		int s1 = value(roman[i]);

		if (i + 1 < roman.length()) {
			// Getting value of symbol s[i+1]
			int s2 = value(roman[i + 1]);

			// Comparing both values
			if (s1 >= s2) {
				// Value of current symbol
				// is greater or equal to
				// the next symbol
				res = res + s1;
			} else {
				// Value of current symbol is
				// less than the next symbol
				res = res + s2 - s1;
				i++;
			}
		} else {
			res = res + s1;
		}
	}
	return res;
}

// Driver Code
int romanToDecimal_main() {
	// Considering inputs given are valid
//	string str = "MCMIV";
//	string str = "XXI";
//	string str = "MDCLXVI";
//	string str = "MMVIII";
//	cout << "Integer form of Roman Numeral is " << decode(str) << endl;
	return 0;
}

