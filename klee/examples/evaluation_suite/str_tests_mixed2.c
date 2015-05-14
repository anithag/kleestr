/*
 * Combines strcat and strcmp.
 */

#include <klee/klee.h>

int compare(char *x, char *y, int i) {

  if(strcat(x, "sql_injection;") == strcat (y, x) && strlen(x) == 1)
    return i+1;
  else
    return i-1;
  
} 

int main() {
  char a[14];
  char b[15];
  int i;
  klee_make_symbolic(a, 14, "a-print");
  klee_make_symbolic(b, 15, "b-print");
//  klee_make_symbolic(&i, 4, "i");
  return compare(a, b, i);
} 
