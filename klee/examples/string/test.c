/*
 * First KLEE tutorial: testing a small function
 */

#include <klee/klee.h>

int get_sign(char x) {
  if (x == 0)
     return 0;
  
  if (x < 0)
     return -1;
  else 
     return 1;
} 

int main() {
  char a;
  klee_make_symbolic(&a, sizeof(a), "a");
  return get_sign(a);
} 
