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
	int sizeof_string = 5;
	str = malloc(sizeof_string);
	klee_make_symbolic(str, sizeof_string, "str_len_test_string");
	c = strlen(left);
	return 0;
}