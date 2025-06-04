#include <iostream>
using namespace std;

/**
 * NOTES:
1. Data hiding is about data member in classes, we keep data members as private (generally) and this is considered as data hiding.
   It is not about hacking or something, it is about correctness of the data and preventing accidental manipulation.
   Example 1: Audio player volume increase.
 */

class DataHiding {
private:
	int volume;

public:
	DataHiding(int v):volume(v){
	}
	void setVolume(int v) {
		if (v >= 0 && v <= 100) {
			this->volume = v;
			cout << "Set volume" << endl;
		} else {
			cout << "Can't set volume" << endl;
		}

	}
	int getVolume() {
		return volume;
	}
};


void data_hiding_main(){
	DataHiding obj(10);
	cout << obj.getVolume() << endl;
	obj.setVolume(101);

}
