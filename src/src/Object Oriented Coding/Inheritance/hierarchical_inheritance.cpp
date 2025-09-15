/*
 * hierarchical_inheritance.cpp
 *
 *  Created on: Aug 2, 2022
 *      Author: ssingh42
 */

#include <iostream>
using namespace std;
/**
 * POINTS:
	1. Multiple derived classes with same base class is called hierarchical inheritance.
 *
 */

namespace hierarchical_inheritance {
class Human {
public:
	void breathing() {
		cout << "I am Breathing" << endl;
	}
};

class Youtuber: public Human {
public:
	void work() {
		cout << "Youtuber is working" << endl;
	}
};

class Engineer: public Human {
public:
	void work() {
		cout << "Engineer is working" << endl;
	}
};

class Doctor: public Human {
public:
	void work() {
		cout << "Doctor is working" << endl;
	}
};
}

using namespace hierarchical_inheritance;
void printWork(hierarchical_inheritance::Human* obj);

void hierarchical_inheritance_main() {
	hierarchical_inheritance::Youtuber youtuber;
	youtuber.breathing();
	youtuber.work();

	hierarchical_inheritance::Engineer engineer;
	engineer.breathing();
	engineer.work();

	hierarchical_inheritance::Doctor doctor;
	doctor.breathing();
	doctor.work();

	hierarchical_inheritance::Human* youtuberObj = new hierarchical_inheritance::Youtuber();
	youtuberObj->breathing();
	//youtuberObj->work(); . It will not compile since object is of type Human.

	hierarchical_inheritance::Human* engineerObj = new hierarchical_inheritance::Engineer();
	engineerObj->breathing();

	hierarchical_inheritance::Human* doctorObj = new hierarchical_inheritance::Doctor();
	doctorObj->breathing();

	printWork(youtuberObj);
	printWork(engineerObj);
	printWork(doctorObj);
}

void printWork(Human* obj) {
	obj->breathing();
}
