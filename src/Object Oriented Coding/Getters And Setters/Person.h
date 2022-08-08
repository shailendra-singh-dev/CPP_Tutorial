/*
 * Person.h
 *
 *  Created on: Feb 23, 2018
 *      Author: SS8468
 */

#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>

using namespace std;

namespace Getters_And_Setters {
	class Person {
	private:
		string name;
	public:
		string getName();
		void setName(string newName);
		string toString();
	};
}

#endif /* PERSON_H_ */
