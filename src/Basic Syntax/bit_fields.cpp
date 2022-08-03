
#include <iostream>
using namespace std;

/**
 * https://www.youtube.com/watch?v=S30RAtj-0dQ&list=PLk6CEY9XxSIAQ2vE_Jb4Dbmum7UfQrXgt&index=53
 *
 * 1. It is used to reduce the size of "class/struct" if we can.
   2. Force alignment is possible using unnamed bit fields of size 0.
 */

/**
 * POINTS:
	1. It is used to reduce the size of "class/struct" if we can.
	2. Force alignment is possible using unnamed bit fields of size 0.
 */

struct Date{
	unsigned int day:5;
	unsigned int month:4;
	unsigned int year;

	// Not allowed for bit-fields.
	/**
	 * 1. static
	 * 2. array
	 * 3. address of operator
	 */
};

struct Node1{
	unsigned int a:6;
	unsigned int b:9;
};


// Force alignment with un-named bit field.
struct Node2{
	unsigned int a:6;
	unsigned int:0;
	unsigned int b:9;
};

void bit_fields_main(){
	cout << sizeof(Date) << endl;
	cout << sizeof(Node1) << endl;
	cout << sizeof(Node2) << endl;

	//This will not work
	Date date;
	//cout << &date.day << endl;
}

