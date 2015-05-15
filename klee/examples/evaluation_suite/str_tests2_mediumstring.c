/*
*  Should generate at least three different tests as there are 3 paths in cmp_str.
*/

#include <klee/klee.h>

int cmp_str (char *a, char *b, int len) {
  int comparison = strcmp(a,"bb");
  if (strcmp(a,b)) {
    if (strcmp(a,b) > -1) {
      return len + 1;
    }
    else 
      return len - 1;
  }
  return len;
}

int main() {
  char a[2];
  char b[2];
  int len = 2;
  int i;
  klee_make_symbolic(a, 2, "str1");
  klee_make_symbolic(b, 2, "str2");

  return cmp_str(a, b, len);
} 