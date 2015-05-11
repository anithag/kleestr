/*
 * test_strstr.c
 *
 *  Created on: Apr 22, 2015
 *      Author: zehranaz
 */

#include <klee/klee.h>
#include <string.h>
#include <stdlib.h>

int main () {
	char *haystack;
	char *needle;
	haystack = malloc(5);
	needle = malloc(3);
	klee_make_symbolic(haystack, 5, "haystack");
	klee_make_symbolic(needle, 3, "needle");
	int c = ststr(haystack, needle);
	return 0;
}

