#include <klee/klee.h>
#include <stdlib.h>
#include <stdio.h>

#define HTE_NOMEM -1
#define HTE_UNKNOWN -2

int check_len(char *field_value_format) {
	int len;
	va_list ap;
	va_start(ap, field_value_format);
	len = vsnprintf(NULL, 0, field_value_format, ap);
	va_end(ap);

	if (len > 0) {
		char *p;
		int len2;
		
		if ((p = malloc(sizeof(char) * (len + 1))) == NULL) return HTE_NOMEM;
		klee_make_symbolic(p, sizeof(char) * (len + 1), "p");
		va_start(ap, field_value_format);
		len2 = vsnprintf(p, len + 1, field_value_format, ap);
		va_end(ap);
		 
		if (len != len2) {
			free(p);
			return HTE_UNKNOWN;
		}
		
		// field_value = p;
		// field_valueFree = 1;

		return 1;
	}
}

int main () {
	char string[50];
	klee_make_symbolic(string, 50, "string");
	check_len(string);
} 