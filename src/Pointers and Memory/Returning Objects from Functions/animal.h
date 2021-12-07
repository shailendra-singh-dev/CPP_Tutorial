/*
 * animal.h
 *
 *  Created on: Mar 31, 2018
 *      Author: Shailendra
 */

#ifndef ANIMAL_H_
#define ANIMAL_H_

#include "iostream"

using namespace std;

class Animal {
private:
	string name;
public:
	Animal();
	~Animal();
	Animal(const Animal& otherAnimal);
	void setName(string newName);
	void speak();
};

#endif /* ANIMAL_H_ */
