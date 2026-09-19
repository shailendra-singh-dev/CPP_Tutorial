/*
 * BugfixingBisection.cpp
 *
 *  Created on: Mar 1, 2023
 *      Author: ssingh42
 */

#include "vector"
#include <iostream>
using namespace std;

int solution(int *A, int N, int X) ;

void BugfixingBisection_main() {
	int A[] = { 1, 2, 5, 9, 9 };
	int X= 5;
	int result = solution(A, sizeof(A) / sizeof(A[0]), X);
	cout << "result" << result << endl;
}

int solution(int *A, int N, int X) {
	int r, m, l;
	if (N == 0) {
		return -1;
	}
	l = 0;
	r = N - 1;
	while (l < r) {
		m = (l + r) / 2;
		if (A[m] == X) {
			return m;
		}
		if (A[m] > X) {
			r = m - 1;
		} else {
			l = m + 1;
		}
	}
	return -1;
}


