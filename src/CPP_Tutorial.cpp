//============================================================================
// Name        : CPP_Tutorial.cpp
// Author      : Shailendra Singh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iostream>
#include <stdio.h>
#include <sstream>
#include <vector>
#include <set>
#include <map>
#include <list>
#include <string.h>

using namespace std;

int Delete_This_main();

int* split_integer(int num, int parts) {
	int array[parts];
	int *arr = array;
	int remain = num;
	int partsLeft = parts;
	for (int i = 0; partsLeft > 0; i++) {
		int size = (remain + partsLeft - 1) / partsLeft; // rounded up, aka ceiling
		arr[i] = size;
		remain -= size;
		partsLeft--;
	}
	return arr;
}

int main(int argc, char **argv) {
	Delete_This_main();
}

void split(char *s, int n) {
//	char s[1000];
//	int n;
//	scanf("%s %d",s,&n);
	int len = strlen(s);
	int ctr = len / n;
	if (len % n == 0) {
		for (int i = 0; i < len; i++) {
			if (i % ctr == 0) {
				printf(" %c", s[i]);
			} else {
				printf("%c", s[i]);
			}

		}
	} else {
		printf("-1");
	}
}

