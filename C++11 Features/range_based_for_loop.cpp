#include <iostream>
using namespace std;

void range_based_for_loop(){	 
	vector<int> elements = {10,20,30};
	for(auto& e:elements){
		cout << e << endl;
	}
}


