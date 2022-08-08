/*
 * hybrid_inheritance.cpp
 *
 *  Created on: Aug 2, 2022
 *      Author: ssingh42
 */

/**
 * POINS:
	1. Combination of multiple and hierarchical inheritance is called hybrid inheritance.
	I have explained it in very easy way, let me know if you have any doubts on the topic.
 */

#include <iostream>
using namespace std;

class Male{};
class Female{};
class Student{
public:
	void studying(){
		cout << "I am studying" << endl;
	}

};
class Boy: public Male, public Student{};
class Girl: public Female, public Student{};

void hybrid_inheritance_main(){
	Boy boy;
	boy.studying();
}



