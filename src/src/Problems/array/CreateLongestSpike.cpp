/*
 * CreateLongestSpike.cpp
 *
 *  Created on: Mar 1, 2023
 *      Author: ssingh42
 */

#include "vector"
#include <iostream>
using namespace std;

int get_spike_count(int arr[], int n);

void CreateLongestSpike_main() {
	int A[] = {2, 3, 3, 2, 2, 2, 1};//{2, 5, 3, 2, 4, 1};//{ 1, 2};
	int result = get_spike_count(A, sizeof(A) / sizeof(A[0]));
	cout << "result" << result << endl;
}

int get_spike_count(int arr[], int n) {
	int i, j;

	/* Allocate memory for LIS[] and initialize LIS values
	 as 1 for all indexes */
	int* lis = new int[n];
	for (i = 0; i < n; i++)
		lis[i] = 1;

	/* Compute LIS values from left to right */
	for (i = 1; i < n; i++)
		for (j = 0; j < i; j++)
			if (arr[i] > arr[j] && lis[i] < lis[j] + 1){
				cout << "LIS lis[i]:" << lis[i] << ",lis[j]:" <<lis[i]<< endl;
				lis[i] = lis[j] + 1;
			}

	/* Allocate memory for lds and initialize LDS values for
	 all indexes */
	int* lds = new int[n];
	for (i = 0; i < n; i++)
		lds[i] = 1;

	/* Compute LDS values from right to left */
	for (i = n - 2; i >= 0; i--)
		for (j = n - 1; j > i; j--)
			if (arr[i] > arr[j] && lds[i] < lds[j] + 1){
				cout << "LDS lis[i]:" << lis[i] << ",lis[j]:" <<lis[i]<< endl;
				lds[i] = lds[j] + 1;
			}

	/* Return the maximum value of lis[i] + lds[i] - 1*/
	int max = lis[0] + lds[0] - 1;
	for (i = 1; i < n; i++)
		if (lis[i] + lds[i] - 1 > max){

			max = lis[i] + lds[i] - 1;
		}

	return max;
}

