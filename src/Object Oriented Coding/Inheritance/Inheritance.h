/*
 * Person.h
 *
 *  Created on: Feb 23, 2018
 *      Author: SS8468
 */

#ifndef INHERITANCE_H
#define INHERITANCE_H

#include <iostream>

using namespace std;

namespace Inheritance {
	class Animal {
	public:
		void speak() {
			cout << "Animal speaking" << endl;
		}
	};

	class Cat: public Animal {
	public:
		void speak() {
			cout << "Cat speaking" << endl;
		}
		void walk() {
			cout << "Cat walking" << endl;
		}
	};

	class Tiger: public Cat {
	public:
		void speak() {
			cout << "Tiger speaking" << endl;
		}
		void attack() {
			cout << "Tiger attacking" << endl;
		}
	};

}
#endif /* PERSON_H_ */
