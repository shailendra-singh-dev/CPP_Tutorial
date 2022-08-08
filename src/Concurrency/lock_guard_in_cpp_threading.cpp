/*
 * lock_guard_in_cpp_threading.cpp
 *
 *  Created on: Aug 7, 2022
 *      Author: ssingh42
 */

/**
	TOPIC: std::lock_guard In C++

	NOTES:
	0. It is very light weight wrapper for owning mutex on scoped basis.
	1. It acquires mutex lock the moment you create the object of lock_guard.
	2. It automatically removes the lock while goes out of scope.
	3. You can not explicitly unlock the lock_guard.
	4. You can not copy lock_guard.
 *
 */


#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>

using namespace std;
mutex _mutex;

void guard_loop(int thread_number, int loopFor) {
	lock_guard<mutex> obj(_mutex);
	for (int i = 0; i < loopFor; i++) {
		cout << "Thread " << thread_number << " acquired lock and is in loop" << endl;
		this_thread::sleep_for(chrono::seconds(1));
	}
}

void lock_guard_in_cpp_threading_main(){
	thread t1(guard_loop, 1, 10);
	thread t2(guard_loop, 2, 10);
	t1.join();
	t2.join();
}


