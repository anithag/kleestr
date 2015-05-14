/*
*  Indexes into string to compare a character. Longer string.
*/

#include <klee/klee.h>


char* cmp_str (char *a, char *b) {
  if (a[2] == b[1] && b[1] == 'a') 
    return a;
  else 
    return b;
}

int main() {
  char a[300];
  char b[300];

  klee_make_symbolic(a, 300, "str1");
  klee_make_symbolic(b, 300, "str2");

  return *cmp_str(a,b);
} 