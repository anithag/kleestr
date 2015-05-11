//#include <klee/klee.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <klee/klee.h>

#define STRING_LENGTH 50
#define NUMBER_OF_STRINGS 5
#define MAX_QUERY_SIZE 210

// TODO - Hint: may want to add some checks here
char* strcat(char *dest, char *src) {
 	int len = 0;
 	while (dest[len] != '\0') {
 		len++;
 	}
 	int i = 0;
 	while (src[i] != '\0') {
 		dest[i+len] = src[i];
 		i++;
 	} 	
 	return dest;
}

// Generates a piece of SQL query
void get_query(char *query_buf) {
	char query_library [NUMBER_OF_STRINGS][STRING_LENGTH+1] = {
		"INSERT INTO STARS (ID,NAME) VALUES (1, 'Paul')\0", 
		"INSERT INTO QUEENS (ID,NAME) VALUES (15, 'Tof')\0", 
		"INSERT INTO HEARTS (ID,NAME) VALUES (10, 'Sam')\0",
		"INSERT INTO ACES (ID,NAME) VALUES (11, 'Helen')\0",
		"INSERT INTO KINGS (ID,NAME) VALUES (91, 'Loki')\0"
	};
	
	// Pick a random token to attach to SQL query
	srand(time(NULL));
	int index = rand() % NUMBER_OF_STRINGS;
	int i= 0;
	while (query_library[index][i] != '\0') {
		query_buf[i] = query_library[index][i];
		i++;
	}
}

// Calls get_query repeatedly to generate a SQL query. Appends it onto query. EVIL.
void generate_SQL_query(char *query) {
	char query_buf[100];
	get_query(query_buf);
	query = strcat(query, query_buf);

	if (strlen(query) < MAX_QUERY_SIZE) {
		query = strcat(query, " ");
		get_query(query_buf);
		query = strcat(query, query_buf);
	}
}

/*
	Motivation: An attacker exploit a buffer overflow vulnerability on a server
	by concatenating queries to build up to an unexpected SQL query. Let's see 
	if kleestr can help to prevent this sort of attack. 
	
	Write a concat function where the length of the destination is >= length of
	source. Essentially, make sure that calling concatenation on the inputs won't 
	result in buffer overflow.

	Your concatenation function will be used to put together a SQL query of 
	arbitrary length. You can use strlen support to help you.

	Run your function on both klee and kleestr. Can you detect an 
	improvement in kleestr?

	Extra challenge: look at the source code for kleestr. Can you figure out 
	how you would add support for strstr? Hint: look within 
	path-to-kleestr-release/klee/lib/Core, path-to-klee/lib/Expr, 
	path-to-kleestr-release/metasmt and try to trace how strlen is supported. 
	Note: this will be helpful for us too :-)
*/

int main() {
	char dest[MAX_QUERY_SIZE];
	klee_make_symbolic(dest, MAX_QUERY_SIZE, "query_destination");
	generate_SQL_query(dest);
	//printf("%s\n", dest);

	return 0;
}

int get_sign(char *x, char *y, int i) {
  
  if(strlen(x) == 10 )
          return i+1;
  else
          return i-1;
  
} 

