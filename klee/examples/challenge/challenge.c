#include <klee/klee.h>

// TODO
char* strcat(char *dest, const char *src) {
 	return null;
}

// Generates a piece of SQL query
char* get_query() {

}

// Calls get_query repeatedly to generate a SQL query
char* generate_SQL_query() {
 	
}
 

/*
	Write a concat function where the length of the destination is >= length of
	source. Basically make sure that calling concatenation on the inputs won't 
	result in overflow.

	This concatenation function will be used to put together a SQL query of 
	arbitrary length. You can use strlen support to help you.

	Then run your function on both klee and kleestr. Can you detect an 
	improvement in kleestr?

	Extra challenge: look at the source code for kleestr. Can you figure out 
	how you would add support for strstr? Hint: look within 
	path-to-kleestr-release/klee/lib/Core, path-to-klee/lib/Expr, 
	path-to-kleestr-release/metasmt and try to trace how strlen is supported. 
	Note: this will be helpful for us too :-)
*/

int main() {
	char dest[100];
	char src[6];
	src = "hello";
	strcat(dest, src);

	return 0;
}