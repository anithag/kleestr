#include <klee/klee.h>

int get_sign(char *x, char *y, int i) {
  
  if(i + strlen(y) >= strlen(x) + 2)
          return i+1;
  else if ( (i >> strlen(y)) < (i << strlen(x)))
	  return i;
  else
          return i-1;
  
} 

int main() {
  char a[100];
  char b[100];
  int i=10;
  klee_make_symbolic(a, 100, "a-print");
  klee_make_symbolic(b, 100, "b-print");
//  klee_make_symbolic(&i, 4, "i");
  return get_sign(a, b, i);
} 
