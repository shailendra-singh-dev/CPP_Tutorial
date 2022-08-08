/*
 * Person.h
 *
 *  Created on: Feb 23, 2018
 *      Author: SS8468
 */

#ifndef ENCAPSULATION_H
#define ENCAPSULATION_H

#include <iostream>

using namespace std;

namespace Encapsulation {
	class Animal {
		private:
			string name;
		private:
			string getName() {
				return name;
			}
		public:
			void showInfo() {
				cout << " Info:" + getName() << endl;
			}
		};
}
#endif /* PERSON_H_ */
