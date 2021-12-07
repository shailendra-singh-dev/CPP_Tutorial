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

namespace The_This_Keyword {
	class Person {
		private:
			string name;
			int age;
		public:
			Person();
			Person(string name);
			Person(string name, int age);
			virtual ~Person();
		};
}

#endif /* PERSON_H_ */
