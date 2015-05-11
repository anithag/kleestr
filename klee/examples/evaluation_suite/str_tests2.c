/*
*  Should generate at least three different tests as there are 3 paths in cmp_str.
*/

#include <klee/klee.h>

int cmp_len(char *x, char *y, int i) {
  
  if(strcmp(x, y)) {
	if(strlen(x) >= 10 ) 
          return i+1;
	else
	   return i;
  }
  else
    return i-1;
  
} 

int cmp_str (char *a, char *b, int len) {
  int comparison = strcmp(a,"bb");
  if (strcmp(a,b)) {
    if (strcmp(a,b) > 0) {
      return len + 1;
    }
    else 
      return len - 1;
  }
  return len;
}

int main() {
  char a[2];
  char b[2];
  int len = 5;
  int i;
  klee_make_symbolic(a, 2, "str1");
  klee_make_symbolic(b, 2, "str2");

  return cmp_str(a, b, len);
} 