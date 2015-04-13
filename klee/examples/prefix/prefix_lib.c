#include <klee/klee.h>
#include <string.h>

int prefix(char *x) {

 char *dictionary = {"Hello"};
 int len=strlen(dictionary);

  return strncmp(x, dictionary, len); //it is a prefix
 
}

int main() {
  char a[10];
  klee_make_symbolic(a, 10, "a");
  klee_assume(a[9] =='\0');
  klee_assert(a[3] == 'l');
  return prefix(a);
} 
