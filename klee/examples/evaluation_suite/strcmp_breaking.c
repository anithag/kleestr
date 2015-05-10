/*
*  Performs many different string operations to ensure all different operators perform.
*  Tests to make sure klee_assert and klee_assume work with the new features.
*/

#include <klee/klee.h>


char* cmp_str (char *a, char *b) {
  if (strcmp(a, b) == 0)
    return a;
  else if (strcmp(a,b) > 0)
    return a;
  else 
    return b;
}

int main() {
  char a[100];
  char b[100];

  klee_make_symbolic(a, 100, "str1");
  klee_make_symbolic(b, 100, "str2");

  return *cmp_str(a,b);
} 