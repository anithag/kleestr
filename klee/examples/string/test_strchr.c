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
	char *str;
	int ch;
	str = malloc(6);
	klee_make_symbolic(str, 5, "test_string");
	klee_make_symbolic(ch, sizeof(int), "index into string")
	// returns a pointer to the first occurrence of the ch in str.
	c = strchr(str, ch);
	return 0;
}