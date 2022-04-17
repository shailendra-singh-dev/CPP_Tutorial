/*
 * contructor_destructor.cpp
 *
 *  Created on: 11-Jul-2022
 *      Author: swati
 */


#include <iostream>
using namespace std;

class Constructor_Destructor{
	int* x;
public:
	Constructor_Destructor(int* y){
		y = x;
		cout << " Constructor called" << endl;
	}
    ~Constructor_Destructor(){
    	cout << " Destructor called" << endl;
    	delete x;
    }
};


void contructor_destructor_main(){
	Constructor_Destructor constructor_Destructor(new int(1000));
	constructor_Destructor.~Constructor_Destructor();// Not recommended.
}


