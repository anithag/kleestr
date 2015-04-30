/*
 * First KLEE tutorial: testing a small function
 */

#include <klee/klee.h>

int get_sign(int *x) {
  if (*x > 10)
     return 2;
  else 
     return 1;
} 

int main() {
  int myarray[100];
  klee_make_symbolic(myarray, 400, "myarray-print");
  return get_sign(myarray);
} 
