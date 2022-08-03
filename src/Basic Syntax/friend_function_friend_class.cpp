/*
 * friend_function_friend_class.cpp
 *
 *  Created on: Jul 22, 2022
 *      Author: ssingh42
 */

/**
 * https://www.youtube.com/watch?v=mD5f3-30HEc&list=PLk6CEY9XxSIAQ2vE_Jb4Dbmum7UfQrXgt&index=47
 */

#include <iostream>
using namespace std;

/**
 * NOTES:
	1. Keyword "friend" is used to make some [function OR class] as friend of your class.
	2. Friend function OR friend class can access private/public/protected Data Member OR Member Functions of another class.
	3. Function can not become friend of another function.
	4. Class can not become friend of function.
	5. Friendship is not mutual. If a class A is friend of B, then B doesn’t become friend of A automatically.
	6. Friendship is not inherited.
 */

class FriendClass {
	int x;
public:
	FriendClass(int x) :
			x(x) {
	}
	friend void setX(FriendClass& obj, int val);
	friend int getX(FriendClass& obj);
	friend class InnerFriendClass;
};

void setX(FriendClass& obj, int val) {
	obj.x = val;
}

int getX(FriendClass& obj) {
	return obj.x;
}

class InnerFriendClass {
public:
	void setY(FriendClass& obj, int val) {
		obj.x = val;
	}
	int getY(FriendClass& obj) {
		return obj.x;
	}
};

void friend_function_friend_class_main() {
	FriendClass obj(10);
	cout << getX(obj) << endl;
	setX(obj, 20);
	cout << getX(obj) << endl;

	InnerFriendClass innerObj;
	cout << innerObj.getY(obj) << endl;
	innerObj.setY(obj, 30);
	cout << innerObj.getY(obj) << endl;

}

