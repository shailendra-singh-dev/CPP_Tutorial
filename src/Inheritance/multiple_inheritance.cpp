/*
 * multiple_inheritance.cpp
 *
 *  Created on: Aug 1, 2022
 *      Author: ssingh42
 */

#include <iostream>
using namespace std;

/*
 * POINTS:
	1. A derived class with multiple base class is called multiple inheritance.
	2. There is an ambiguity problem in multiple inheritance.
 *
 */

class Youtuber {
	int x;
public:
	Youtuber(int x) :
			x { x } {
		cout << "Youtuber" << endl;
	}
	void work() {
		cout << "Working as Youtuber " << endl;
	}

	void makingVideos() {
		cout << "Making videos" << endl;
	}
};

class Engineer {
	int y;
public:
	Engineer(int y) :
			y { y } {
		cout << "Engineer" << endl;
	}
	void work() {
		cout << "Working as Engineer " << endl;
	}

	void buildingProjects() {
		cout << "Making videos" << endl;
	}
};

class Shailendra: public Youtuber, public Engineer {
public:
	Shailendra(int x = 0, int y = 0) :
			Youtuber(x), Engineer(y) {
		cout << "Shailendra" << endl;
	}
	void work() {
		cout << "Working as Engineer " << endl;
	}

	void buildingProjects() {
		cout << "Building projects" << endl;
	}
};

void multiple_inheritance_main() {
	Shailendra shailendra(10, 20);
	shailendra.work();
	shailendra.Youtuber::work();
	shailendra.Engineer::work();

	Youtuber sy = shailendra;
	sy.work();
	sy.makingVideos();

	Youtuber sy1 = static_cast<Youtuber>(shailendra);
	sy1.work();
	sy1.makingVideos();

	Engineer se = shailendra;
	se.work();
	se.buildingProjects();

	Engineer se1 = static_cast<Engineer>(shailendra);
	se1.work();
	se1.buildingProjects();
}

