//============================================================================
// Name        : Arrays.cpp
// Author      : Shailendra
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

string texts[] = { "AA", "BB", "CC" };

void show1(const int numElements, string texts[]) {
	cout << endl;
	cout << "show1() sizeof(texts):" << sizeof(texts) << endl;//Size of pointer which is LONG datatype size.
	for (int i = 0; i < numElements; i++) {
		cout << texts[i] << " " << flush;
	}
}

void show2(const int numElements, string* texts) {
	cout << endl;
	cout << "show3() sizeof(texts):" << sizeof(texts) << endl;
	for (int i = 0; i < numElements; i++) {
		cout << texts[i] << " " << flush;
	}
}

void show3(const int numElements, string(&texts)[3]) {
	cout << endl;
	cout << "show1() sizeof(texts):" << sizeof(texts) << endl;
	for (int i = 0; i < numElements; i++) {
		cout << texts[i] << " " << flush;
	}
}

string* getArray() {
	//Do not return the pointer to local variable.Once function exits pointer can no longer point to same memory.
	// If you want to return pointer , create  pointer using NEW operator and make sure to use DELETE to deallocate same memory.
	//	string texts[] = { "AA", "BB", "CC" };
	return texts;
}

char* getMemory() {
	char* pMemory = new char[100];
	return pMemory;
}

void freeMemory(char* pMemory) {
	delete[] pMemory;
}
int Arrays_and_Functions_main() {

	cout << "main() sizeof(texts):" << sizeof(texts) << endl;

	int numElements = sizeof(texts) / sizeof(string);
	cout << "main() numElements:" << numElements << endl;

	show1(numElements, texts);
	show2(numElements, texts);
	show3(numElements, texts);

	char* pMemory = getMemory();
	freeMemory(pMemory);
	return 0;
}
