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

namespace Odds_and_Ends {
class Person {
	public:
		static int const MAX = 100;

	private:
		int id;
		static int count;

	public:
		Person() {
			id = ++count;
		}

		int getID() {
			return id;
		}

		void showInfo() {
			cout << "ID:" << id << endl;
		}

		static int getCount() {
			return count;
		}

};

}

#endif /* PERSON_H_ */
