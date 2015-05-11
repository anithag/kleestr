/*
*  Performs many different string operations to ensure all different operators perform.
*  Tests to make sure klee_assert and klee_assume work with the new features.
*/

#include <klee/klee.h>
#define STRLEN 3


int cmp_str (char *c, char *d, int num) {
  //int comparison = strcmp(a,"bb");
  if (strcmp(c,d)) {
    if (strlen(c) >= -1) {
      return num + 1;
    }
    else if (strlen(c) > 0)
      return num-2;
    else 
      return num;
  }
  else 
    return num-1;
}

int main() {
  char a[STRLEN];
  char b[STRLEN];
  int len = 5;
  int i;
  klee_make_symbolic(a, STRLEN, "str1");
  klee_make_symbolic(b, STRLEN, "str2");

  klee_assume(strlen(a) == strlen(b));
  int result = cmp_str(a,b,len);
  klee_assert(strlen(a) == strlen(a));
  klee_assert(strlen(a) == strlen(b));
  return result;
} 