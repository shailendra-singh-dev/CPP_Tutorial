/*
 * recursive_mutex_in_cpp.cpp
 *
 *  Created on: Aug 7, 2022
 *      Author: ssingh42
 */

/**
 * OPIC: Recursive Mutex In C++ (std::recursive_mutex)

	NOTES:
	0. It is same as mutex but, Same thread can lock one mutex multiple times using recursive_mutex.
	1. If thread T1 first call lock/try_lock on recursive mutex m1, then m1 is locked by T1, now
	   as T1 is running in recursion T1 can call lock/try_lock any number of times there is no issue.
	2. But if T1 have aquired 10 times lock/try_lock on mutex m1 then thread T1 will have to unlock
	   it 10 times otherwise no other thread will be able to lock mutex m1.
	   It means recursive_mutex keeps count how many times it was locked so that many times it should be unlocked.
	3. How many time we can lock recursive_mutex is not defined but when that number reaches and if we were calling
	   lock() it will return std::system_error OR if we were calling try_lock() then it will return false.

	BOTTOM LINE:
	0. It is similar to mutex but have extra facility that it can be locked multiple time by same thread.
	1. If we can avoid recursive_mutex then we should because it brings overhead to the system.
	2. It can be used in loops also.
 *
 */

#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>

using namespace std;
recursive_mutex _recursive_mutex;

void recursion(int count, int thread_number){
	if(count<0){
		return;
	}
	_recursive_mutex.lock();
	cout << "Thread " << thread_number << " acquired lock. count:" << count << endl;
	this_thread::sleep_for(chrono::seconds(1));
	recursion(--count, thread_number);

	_recursive_mutex.unlock();
	cout << "Thread " << thread_number << " released lock. count:" << count << endl;
}

void loop(int thread_number) {
	for (int i = 0; i < 10; i++) {
		cout << "Thread " << thread_number << " acquired lock." << endl;
		_recursive_mutex.lock();
	}
	for (int i = 0; i < 10; i++) {
		cout << "Thread " << thread_number << " released lock." << endl;
		_recursive_mutex.unlock();
	}
}

void recursive_mutex_in_cpp_main(){
	/**
	thread t1(recursion, 10,1);
	thread t2(recursion, 10,2);
	t1.join();
	t2.join();
	**/
	thread t1(loop, 1);
	thread t2(loop, 2);
	t1.join();
	t2.join();
}



