//============================================================================
// Name        : Constructor.cpp
// Author      : Shailendra
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Machine {
private :
	int id;
public :
	Machine() : id(0){	cout << "Machine zero argument constructor called" << endl; }
	Machine(int id) : id(id){	cout << "Machine parameterized constructor called" << endl; }
	void info(){cout << "ID:" <<  id << endl;}
};

class Vehicle : public Machine {
public :
	Vehicle() : Machine(10){	cout << "Vehicle zero argument constructor called" << endl; }
	Vehicle(int id) : Machine(id){	cout << "Vehicle parameterized constructor called" << endl; }
};

class Car : public Vehicle {
public :
	Car() : Vehicle(100){	cout << "Car zero argument constructor called" << endl; }
};

int Constructor_Inheritance_main() {
	Machine machine;
	machine.info();

	Vehicle vehicle;
	vehicle.info();

	Car car;
	car.info();

	return 0;
}
