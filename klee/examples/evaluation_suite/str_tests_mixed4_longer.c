/*
 * Combines strcat and strcmp and strlen.
 */

#include <klee/klee.h>

int compare(char *x, char *y, int i) {
  int ret, j;
  int length_x = strlen(x);
  int length_y = strlen(y);
  if(strcat(x, "sql_injection;") == strcat (y, x))
    ret = i+1;
  else if (length_x > 1 && length_y > 1) {
    if (strcmp(x,y))
      ret = i;
    else
      ret = i*2;
  }

  else 
      ret = i-1;


  return ret;
  
} 

int main() {
  char a[240];
  char b[250];
  int i;
  klee_make_symbolic(a, 240, "a-print");
  klee_make_symbolic(b, 250, "b-print");
//  klee_make_symbolic(&i, 4, "i");
  return compare(a, b, i);
} 
