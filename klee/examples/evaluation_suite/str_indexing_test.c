/*
*  Indexes into string to compare a character. 
*/

#include <klee/klee.h>


char* cmp_str (char *a, char *b) {
  if (a[2] == b[1] && b[1] == 'a') 
    return a;
  else 
    return b;
}

int main() {
  char a[3];
  char b[3];

  klee_make_symbolic(a, 3, "str1");
  klee_make_symbolic(b, 3, "str2");

  return *cmp_str(a,b);
} 