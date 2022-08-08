/*
 * Person.h
 *
 *  Created on: Feb 26, 2018
 *      Author: SS8468
 */

#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>

using namespace std;

namespace Overloading_Constructors {
	class Person {
		public:
			string name;
			int age;
		public:
			Person();
			Person(string newName);
			Person(string newName, int newAge);
			string toString();
			virtual ~Person();
	};
}

#endif /* PERSON_H_ */
