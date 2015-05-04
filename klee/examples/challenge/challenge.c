//#include <klee/klee.h>
#include <stdio.h>
// TODO
char* strcat(char *dest, char *src) {
 	int len = 0;
 	while (dest[len]) {
 		len++;
 	}
 	int i = 0;
 	while (src[i]) {
 		dest[i+len] = src[i];
 		i++;
 	}
 	
 	return dest;
}

// Generates a piece of SQL query
void get_query(char *query_buf) {
	char rand_token[] = "INSERT INTO CLOWNS (ID,NAME) VALUES (1, 'Paul')";
	int i= 0;
	while (rand_token[i]) {
		query_buf[i] = rand_token[i];
		i++;
	}
}

// Calls get_query repeatedly to generate a SQL query. Appends it onto query.
void generate_SQL_query(char *query) {
	char query_buf[100];
	get_query(query_buf);
	query = strcat(query, query_buf);	
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
	char dest[110];
	generate_SQL_query(dest);
	printf("%s\n", dest);

	return 0;
}