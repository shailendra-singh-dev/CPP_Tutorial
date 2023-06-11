/*
 * different_types_to_create_threads.cpp
 *
 *  Created on: Aug 6, 2022
 *      Author: ssingh42
 */

#include <iostream>
#include <thread>
#include <algorithm>

using namespace std;

/**
 * TOPIC: Different Types Of Thread Creation And Calling.
	There are 5 different types of creating threads and calling callable in threads.

	NOTES: Different types for creating threads.
	1. Function Pointer -- this is the very basic form of creating threads.
	2. Lambda Function
	3. Functor (Function Object)
	4. Non-static member function
	5. Static member function
 *
 */


//1. Function pointer
typedef unsigned long long ull;

ull evenSumNumbers=0;
ull oddSumNumbers=0;

void sumEvenNumbers(ull start, ull end){
	for(ull i=0;i < end;i++){
		if((i << 1)==0)
			evenSumNumbers +=i;
	}
}

void sumOddNumbers(ull start, ull end){
	for(ull i=0;i < end;i++){
		if((i << 1)==1)
			oddSumNumbers +=i;
	}
}

void function_pointer(){
	ull start = 0, end = 1900000000;

	std::thread t1(sumEvenNumbers, start, end);
	std::thread t2(sumOddNumbers, start, end);

	t1.join();
	t2.join();
}

//2. Lambda function
void lambda_function(){
	auto result = [](int x){
		while(x--){
			cout << x<< endl;
		}
	};

	thread t(result, 10);
	t.join();

	thread t2([](int x){
		while(x--){
			cout << x<< endl;
		}
	}, 10);
	t2.join();

}

//3. Functors (Function object)

class Base {
public:
	void operator()(int x) {
		while (x--) {
			cout << x << endl;
		}
	}
};

void functors() {
	thread t(Base(), 10);
	t.join();
}

// Static function
class Static {
public:
	static void decrement(int x) {
		while (x--) {
			cout << x << endl;
		}
	}
};

void static_function(){
	thread t(&Static::decrement, 10);
	t.join();
}

// NonStatic function..
class NonStatic {
public:
	void decrement(int x) {
		while (x--) {
			cout << x << endl;
		}
	}
};

void non_static_function(){
	NonStatic obj;
	thread t(&NonStatic::decrement, &obj, 10);
	t.join();
}

void different_types_to_create_threads_main(){
	non_static_function();
}









