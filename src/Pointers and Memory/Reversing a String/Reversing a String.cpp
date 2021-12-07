//============================================================================
// Name        : Reversing.cpp
// Author      : Shailendra
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "reverse_string.h"

using namespace std;

int Reversing_a_String_main() {
	char texts[] = "hello";
	char* pStart = texts;
	int nChars = sizeof(texts) - 1;
	char* pEnd = pStart + nChars - 1;

	while (pStart < pEnd) {
		swap(*pStart, *pEnd);
		pStart++;
		pEnd--;
	}
	cout << texts << endl;
	return 0;
}

void swap(char a, char b) {
	char temp = a;
	a = b;
	b = temp;
}

