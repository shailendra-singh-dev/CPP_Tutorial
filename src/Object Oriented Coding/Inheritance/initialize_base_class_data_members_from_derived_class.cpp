/*
 * initialize_base_class_data_members_from_derived_class.cpp
 *
 *  Created on: Aug 3, 2022
 *      Author: ssingh42
 */

/**
 * POINTS:
   1. Default constructor of Base class is called automatically. (if we don't call) But if want to call parameterize constructor then we have to call it explicitly.
 *
 */

#include <iostream>
using namespace std;

namespace base{
	class Base {
	private:
		int x;
	public:
		Base():x{0} {
			cout << "Base Default constructor" << endl;
		}
		Base(int x) :x{x} {
			cout << "Base Parameterized constructor" << endl;
		}
	};


	class Derived: public Base {
	private:
		int x;
		int y;
	public:
		Derived():x{0},y{0} {
			cout << "Derived Default constructor" << endl;
		}
		Derived(int x, int y) :Base{x}, x{x}, y{y} {
			cout << "Derived Parameterized constructor" << endl;
		}
	};
}


void initialize_base_class_data_members_from_derived_class_main(){
	base::Derived d(1,2);
}
