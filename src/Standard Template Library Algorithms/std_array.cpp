/*
 * std::array.cpp
 *
 *  Created on: Feb 28, 2023
 *      Author: ssingh42
 */

#include "iostream"
#include "array"

using namespace std;

/**
 * https://www.youtube.com/watch?v=OnnRobBeaLc&list=PLk6CEY9XxSIA-xo3HRYC3M0Aitzdut7AA&index=2
 *
 * Points:
 *
 * 	1. std::array is a container that encapsulates fixed size arrays.
	2. array size is needed at compile time.
	3. Assign by value is actually by value.
	4. Access Elements:
	   a. at()
	   b. []
	   c. front()
	   d. back()
	   e. data() // gives access to the underlying array
 */

void std_array_main(){
	std::array<int, 5> arr= {1,2,3,4,5};
	cout << arr.at(3) << endl;;
	cout << arr[4] << endl;
	cout << arr.front() << endl;
	cout << arr.back() << endl;
	cout << arr.data() << endl;
}
