/*
 * threads.cpp
 *
 *  Created on: Aug 5, 2022
 *      Author: ssingh42
 */

/**
 * QUESTIONS
	1. What do you understand by thread and give one example in C++?

	ANSWER
	0. In every application there is a default thread which is main(), in side this we create other threads.
	1. A thread is also known as lightweight process. Idea is achieve parallelism by dividing a process into multiple threads.
	   For example:
	   (a) The browser has multiple tabs that can be different threads.
	   (b) MS Word must be using multiple threads, one thread to format the text, another thread to process inputs (spell checker)
	   (c) Visual Studio code editor would be using threading for auto completing the code. (Intellicence)

	WAYS TO CREATE THREADS IN C++11
	1. Function Pointers
	2. Lambda Functions
	3. Functors
	4. Member Functions
	5. Static Member functions
 */

#include <iostream>
#include <thread>
#include <algorithm>
#include <chrono>

using namespace std;
using namespace std::chrono;

typedef unsigned long long ull;

ull evenSum=0;
ull oddSum=0;

void sumEven(ull start, ull end){
	for(ull i=0;i < end;i++){
		if((i << 1)==0)
			evenSum +=i;
	}
}

void sumOdd(ull start, ull end){
	for(ull i=0;i < end;i++){
		if((i << 1)==1)
			oddSum +=i;
	}
}

void threads_main(){

	//auto startTime = high_resolution_clock::now();
	ull start=0, end=1900000000;

	std::thread t1(sumEven,start,end);
	std::thread t2(sumOdd,start,end);

	t1.join();
	t2.join();

	//sumEven(start,end);
	//sumOdd(start,end);

	//auto endTime = high_resolution_clock::now();
	//auto duration =  std::chrono::duration_cast<microseconds>(endTime - startTime);
	//cout << duration.count()/1000000 << endl;

}

