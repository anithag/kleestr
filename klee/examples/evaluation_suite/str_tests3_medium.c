/*
*  Test specifically for strlen.
*  Should generate at least three different tests.
*/

#include <klee/klee.h>

int cmp_str (char *a, char *b, int len) {
  int length1 = strlen(a);
  int length2 = strlen(b);

  if (strlen(a) > strlen(b)) {
      return len - 1;
  }
  else if (strlen(a) == strlen(b))
    return len;
  return len + 1;
}

int main() {
  char a[50];
  char b[50];
  int len = 5;
  int i;
  klee_make_symbolic(a, 50, "str1");
  klee_make_symbolic(b, 50, "str2");

  return cmp_str(a, b, len);
} 