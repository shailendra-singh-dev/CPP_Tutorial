/*
 * find_errors.cpp
 *
 *  Created on: Dec 8, 2021
 *      Author: ShSingh
 */
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>

//a.
void find_errors_main_a() {
	char *s = "";
	strcpy(s, "Hello World");
	printf("%s\n", s);
}

//b.
#define BUFF_SIZE 7u
uint8_t source[BUFF_SIZE];
uint8_t dest[BUFF_SIZE];
void find_errors_main_b() {
	for (uint8_t i = 0u; i <= BUFF_SIZE; i++) {
		dest[i] = source[i];
	}
}

//c.
class A {
public:
	A() {
	}
	void funcA() {
		printf("A\n");
	}
};
void find_errors_main_c() {
	const A a;
//	a.funcA();
}

//d. invalid conversion from 'int' to 'uint32_t*'
void find_errors_main_d() {
//	uint32_t *req = {10};
//	uint32_t val = 100;
//	WaitForReq(req, val);
}

void WaitForReq(uint32_t *req, uint32_t val) {
//	while(*req != val) /* Do nothing and wait*/

}

