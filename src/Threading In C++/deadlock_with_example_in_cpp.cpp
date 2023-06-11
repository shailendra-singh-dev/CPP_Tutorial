/*
 * deadlock_with_example_in.cpp.cpp
 *
 *  Created on: Aug 7, 2022
 *      Author: ssingh42
 */


/**
 * https://www.youtube.com/watch?v=VG2Va80XZdo&list=PLk6CEY9XxSIAQ2vE_Jb4Dbmum7UfQrXgt&index=88
 * In this video i have explain what is dead lock with the help of program in c++. And we will learn how to avoid them.
 */


#include <iostream>
#include <thread>
#include <algorithm>
#include <mutex>

using namespace std;
mutex mutex1_, mutex2_;

void thread1(){
	mutex1_.lock();
	//this_thread::sleep_for(chrono::seconds(1)); Uncomment to see deadlock.
	mutex2_.lock();
	cout << "Critical section of thread 1" << endl;
	mutex1_.unlock();
	mutex2_.unlock();
}


void thread2(){
	mutex2_.lock();
	//this_thread::sleep_for(chrono::seconds(1));  Uncomment to see deadlock.
	mutex1_.lock();
	cout << "Critical section of thread 2" << endl;
	mutex2_.unlock();
	mutex1_.unlock();
}

void deadlock_with_example_in_cpp_main(){
	thread t1(thread1);
	thread t2(thread2);
	t1.join();
	t2.join();
}


