/*
 * test_concat.c
 *
 *  Created on: Apr 22, 2015
 *      Author: zehranaz
 */

#include <klee/klee.h>
#include <string.h>
#include <stdlib.h>

int main () {
	char *left;
	char *right;
	left = malloc(3);
	//b = malloc(5);
	right = "b";
	klee_make_symbolic(left, 3, "left");
	//klee_make_symbolic(b, 3, "b");
	char *c;
	c = strcat(left, right);
	//klee_assert(c == 102);
	return 0;
}
