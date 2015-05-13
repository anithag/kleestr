/*
 * First KLEE tutorial: testing a small function
 */

#include <klee/klee.h>

int get_sign(char *x, char *y, int i) {
  
  if(strcat(x, y) == strcat (y, x))
          return i+1;
  else
          return i-1;
  
} 

int main() {
  char a[100];
  char b[100];
  int i;
  klee_make_symbolic(a, 100, "a-print");
  klee_make_symbolic(b, 100, "b-print");
//  klee_make_symbolic(&i, 4, "i");
  return get_sign(a, b, i);
} 
