/*
 * person.h
 *
 *  Created on: Mar 17, 2018
 *      Author: Shailendra
 */


#ifndef PERSON_H_
#define PERSON_H_

#include "iostream"

using namespace std;

class Person {
private:
	string name;

public:
	Person(){cout << "Called constructor !!" <<endl;};
	Person(string newName);
	~Person();
	string toString();
};

#endif /* PERSON_H_ */
