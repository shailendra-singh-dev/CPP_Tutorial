/*
 * condition_variable_in_cpp_threading.cpp
 *
 *  Created on: Aug 7, 2022
 *      Author: ssingh42
 */

/**
	 * TOPIC: Condition Variable In C++ Threading

	NOTES:
	1. Condition variables allow us to synchronize threads via notifications.
	   a. notify_one();
	   b. notify_all();
	2. You need mutex to use condition variable
	3. Condition variable is used to synchronize two or more threads.
	4. Best use case of condition variable is Producer/Consumer problem.
	5. Condition variables can be used for two purposes:
		a. Notify other threads
		b. Wait for some condition
 *
 */

#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>
#include <condition_variable>
using namespace std;
mutex balance_mutex;

int balance;
condition_variable condition_variable_;

void deposit(int amount){
	unique_lock<mutex> obj(balance_mutex);
	balance += amount;
	condition_variable_.notify_one();
	cout << "After deposit of " << amount << " Balance is " << balance << endl;
}

void withdraw(int amount){
	unique_lock<mutex> obj(balance_mutex);
	condition_variable_.wait(obj, []{ return (balance!=0)?true:false;});
	if(amount > balance){
		cout << "You can't withdraw amount " << amount << " Balance is lower!! it's " << balance << endl;
	}else{
		balance -= amount;
		cout << "Amount deducted " << amount <<  endl;
	}
	cout << "Current balance is " << balance << endl;
}

void condition_variable_in_cpp_threading_main(){
	thread t1(deposit, 100);
	thread t2(withdraw, 500);
	t1.join();
	t2.join();
}


