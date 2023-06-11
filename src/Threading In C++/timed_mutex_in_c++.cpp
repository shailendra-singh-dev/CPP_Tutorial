/*
 * timed_mutex_in_c++.cpp
 *
 *  Created on: Aug 7, 2022
 *      Author: ssingh42
 */


/**
 * TOPIC: Timed Mutex In C++ Threading (std::timed_mutex)
We have learned Mutex, Race Condition, Critical Section in previous videos.

NOTES:
	0. std::timed_mutex is blocked till timeout_time or the lock is aquired and returns true if success
	   otherwise false.
	1. Member Function:
	   a. lock
	   b. try_lock
	   c. try_lock_for    ---\ These two functions makes it different from mutex.
	   d. try_lock_until  ---/
	   e. unlock

	EXAMPLE: try_lock_for();
	Waits until specified timeout_duration has elapsed or the lock is acquired, whichever comes first.
	On successful lock acquisition returns true, otherwise returns false.

 */

#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>

using namespace std;
timed_mutex timed_mutex_;
int count_;


void increment(int thread_number){
	//if(timed_mutex_.try_lock_for(chrono::seconds(2))){
	if(timed_mutex_.try_lock_until(chrono::steady_clock::now() + chrono::seconds(2))){
		count_++;
		cout << "Thread " << thread_number << " entered" << endl;
		this_thread::sleep_for(chrono::seconds(1));
		timed_mutex_.unlock();
	}
}

void timed_mutex_in_cpp_main(){
	thread t1(increment, 1);
	thread t2(increment, 2);
	t1.join();
	t2.join();

	cout << count_ << endl;

}
