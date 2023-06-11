/*
 * std::try_lock_in_c++11_threading.cpp
 *
 *  Created on: Aug 6, 2022
 *      Author: ssingh42
 */

/**
 * TOPIC: std::try_lock() On Mutex In C++11 Threading

	0. std::try_lock() tries to lock all the mutexes passed in it one by one in given order.
	1. On success this function returns -1 otherwise it will return 0-based mutex index number which it could not lock.
	2. If it fails to lock any of the mutex then it will release all the mutex it locked before.
	3. If a call to try_lock results in an exception, unlock is called for any locked objects before re-throwing.
 */


#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>

using namespace std;

mutex m1, m2;
int x,y;

void doSomething(int seconds) {
	this_thread::sleep_for(chrono::seconds(seconds));
}

void produceXOrY(int& x, mutex& m, const char* desc) {
	for (int i = 0; i < 5; i++) {
		m.lock();
		x++;
		cout << desc << x << endl;
		m.unlock();
		doSomething(3);
	}
}

void consumeXOrY() {
	int sum = 0;
	int count = 5;

	while (1) {
		int isLocked = try_lock(m1, m2) == -1;
		if (isLocked) {
			if (x != 0 && y != 0) {
				sum += x + y;
				x = 0;
				y = 0;
				count--;
				cout << "sum:" << sum << endl;
			}
			m1.unlock();
			m2.unlock();
			if (count == 0)
				break;
		}

	}
}



void try_lock_in_c11_threading_main(){
	thread t1(produceXOrY, ref(x), ref(m1), "X ");
	thread t2(produceXOrY, ref(y), ref(m2), "Y ");
	thread t3(consumeXOrY);
	t1.join();
	t2.join();
	t3.join();

}



