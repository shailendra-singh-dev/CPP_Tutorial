/*
 * person.h
 *
 *  Created on: Mar 10, 2018
 *      Author: Shailendra
 */

#ifndef PERSON_H_
#define PERSON_H_

#include "iostream"

using namespace std;

namespace Copy_Constructor {
class Person {
	private:
		string name;

	public:
		Person() {
			cout << "Called constructor !!" << endl;
		}
		Person(const Person &person) :
				name(person.name) {
			person.speak();
			cout << "Copy constructor called !!!" << endl;
		}
		string toString();
		void setName(string name) {
			this->name = name;
		}
		void speak() const {
			cout << "My name is " << this->name << endl;
		}
	};

}

#endif /* PERSON_H_ */
