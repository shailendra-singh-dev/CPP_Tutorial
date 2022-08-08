/*
 * unique_lock_in_cpp_threading.cpp
 *
 *  Created on: Aug 7, 2022
 *      Author: ssingh42
 */

/**
 *
 * TOPIC: unique_lock In C++

	NOTES:
	1. The class unique_lock is a mutex ownership wrapper.
	2. It Allows:
		a. Can Have Different Locking Strategies
		b. time-constrained attempts at locking (try_lock_for, try_lock_until)
		c. recursive locking
		d. transfer of lock ownership (move not copy)
		e. condition variables. (See this in coming videos)

	Locking Strategies
	   TYPE           EFFECTS(S)
	1. defer_lock  do not acquire ownership of the mutex.
	2. try_to_lock  try to acquire ownership of the mutex without blocking.
	3. adopt_lock  assume the calling thread already has ownership of the mutex.
 */

#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>

using namespace std;

mutex unique_mutex;
int buffer=0;

void unique_loop(int thread_number, int loopFor) {
	unique_lock<mutex> obj(unique_mutex);
	for (int i = 0; i < loopFor; i++) {
		buffer++;
		cout << "Thread " << thread_number << " acquired lock and is in loop. buffer:" << buffer << endl;
		this_thread::sleep_for(chrono::seconds(1));
	}
}

void unique_loop_defer_lock(int thread_number, int loopFor) {
	unique_lock<mutex> obj(unique_mutex, defer_lock);
	/**
	 * After few lines of code.
	 */
	obj.lock();
	for (int i = 0; i < loopFor; i++) {
		buffer++;
		cout << "Thread " << thread_number << " acquired lock and is in loop. buffer:" << buffer << endl;
		this_thread::sleep_for(chrono::seconds(1));
	}
}

void unique_guard_in_cpp_threading_main(){
	thread t1(unique_loop_defer_lock, 1, 10);
	thread t2(unique_loop_defer_lock, 2, 10);
	t1.join();
	t2.join();
}
