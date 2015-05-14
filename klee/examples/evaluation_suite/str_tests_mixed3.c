/*
 * Combines strcat and strcmp and strlen.
 */

#include <klee/klee.h>

int compare(char *x, char *y, int i) {
  int ret;
  if(strcat(x, "sql_injection;") == strcat (y, x))
    ret = i+1;
  else if (strlen(x) > 1) {
    if (x[1] == "b") {
      ret = i;
    }
    else 
      ret = i-1;
  }

  return ret;
  
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
