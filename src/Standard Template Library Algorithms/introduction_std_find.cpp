/*
 * algorithm_introduction.cpp
 *
 *  Created on: 17-Apr-2022
 *      Author: swati
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void stl_find_main(){
	std::vector<int> vec{1,0,3,4,5,6};
	//auto it = std::find(vec.begin(), vec.end(), 10);
	std::vector<int>::iterator it = std::find(vec.begin(), vec.end(), 10);
	if(it == vec.end()){
		cout << "Element Not found" << endl;
	}else{
		cout << "Element found" << endl;
	}
}

