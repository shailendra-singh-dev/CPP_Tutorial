/*
 * is-a _and_has-a_relationship.cpp
 *
 *  Created on: Aug 1, 2022
 *      Author: ssingh42
 */


/**
 * POINTS:
	1. Has-a : Composition has Has-a Relation.
	2. Is-a  : Inheritance has Is-a relation.
 */
#include <iostream>
using namespace std;

class Vehicle {
};

class Engine{
};

class Tyre{
};

class Car: public Vehicle{
public:
	Engine e;
	Tyre t;
};

void is_a_and_has_a_relationship_main(){

}

