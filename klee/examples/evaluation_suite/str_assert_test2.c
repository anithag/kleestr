/*
*  Performs many different string operations to ensure all different operators perform.
*  Tests to make sure klee_assert and klee_assume work with the new features.
*/

#include <klee/klee.h>

int cmp_str (char *a, char *b, int len) {
  int comparison = strcmp(a,"bb");
  if (strcmp(a,b) != 0) {
    if (strcmp(a,b) > 0) {
      return len + 2*comparison;
    }
    else 
      return len - comparison;
  }
  else 
    return 0;
}

int main() {
  char a[3];
  char b[3];
  int len = 5;
  int i;
  klee_make_symbolic(a, 3, "str1");
  klee_make_symbolic(b, 3, "str2");
  //klee_make_symbolic(&len, sizeof(int), "len");

  // Sanity checks -- make sure klee_assert is working properly
  klee_assert(strcmp("a", "a") == 0);
  klee_assert(strlen(a) + strlen("b") == strlen(a)+1);
  klee_assume(strlen(a) == strlen(b));
  return cmp_str(a,b,len);
} 