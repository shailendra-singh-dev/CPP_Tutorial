#include <iostream>

using namespace std;

class AnimalClass {
public:
	virtual void eat() {
		cout << "Animal eating veg/non-veg" << endl;
	}

	virtual void makeSound() =0;
};

class Cat: public AnimalClass {
public:
	void eat() {
		cout << "Cat eating non-veg" << endl;
	}

	void makeSound() {
		cout << "Cat making sound" << endl;
	}
};

class Cow: public AnimalClass {
public:
	void eat() {
		cout << "Cow eating veg" << endl;
	}

	void makeSound() {
		cout << "Cow making sound" << endl;
	}
};

void virtual_function_main() {
	AnimalClass *cat = new Cat();
	cat->eat();
	cat->makeSound();

	AnimalClass *cow = new Cow();
	cow->eat();
	cow->makeSound();

}
