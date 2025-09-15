/*
 * std_map.cpp
 *
 *  Created on: Mar 1, 2023
 *      Author: ssingh42
 */


/* https://www.youtube.com/watch?v=nPSDR5nZzHA&list=PLk6CEY9XxSIA-xo3HRYC3M0Aitzdut7AA&index=8
 * Points:
 *
 *  1. std::map is associative container that store elements in key value combination
       where key should be unique, otherwise it overrides the previous value.
	2. It is implement using Self-Balance Binary Search Tree (AVL/Red Black Tree) .
	3. It store key value pair in sorted order on the basis of key (assending/decending).
	4. std::map is generally used in Dictionay type problems.
 */

#include "iostream"
#include "map"
#include "vector"

using namespace std;

void std_map_main(){
	std::map<string, int> map;
	map["ABC"] = 111111111;
	map["DEF"] = 222222222;
	map["GHI"] = 333333333;

	map.insert(std::make_pair("STD",44444444));

	for(auto& el: map){
		cout << "key:" << el.first << ",value:" <<el.second << endl;
	}

	std::map<string, vector<int>> map2;
	map2["ABC"].push_back(111111111);
	map2["ABC"].push_back(999999999);
	map2["DEF"].push_back(222222222);
	map2["GHI"].push_back(333333333);

	for (auto& el1 : map2) {
		cout << "key:" << el1.first << "";
		for (auto& el2 : el1.second) {
			cout << "," << el2 << endl;
		}
	}
}
