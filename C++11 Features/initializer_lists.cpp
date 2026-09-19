#include <iostream>
using namespace std;
#include <vector>

/**
	Initializer lists allow the initialization of containers and arrays with a list of values.
	They are represented by the std::initializer_list type.
*/

class Test{
    public:
        Test(initializer_list<int> list)
        {
            for(auto x : list)
                cout << x << " ";
        }
};

void initializer_lists(){
	// Initialize containers easily.
	vector<int> nums = {1,2,3,4,5};
	//Custom example using initializer_list. 
    Test t{1,2,3};
}


