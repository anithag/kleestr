#include <klee/klee.h>

int prefix(char *x) {

 int i=0;
 char *dictionary = {"Hello"};
  return strcat(x, dictionary); //it is a prefix
 
}

int main() {
  char a[10];
  klee_make_symbolic(a, 10, "a");
  klee_assume(a[9] =='\0');
  return prefix(a);
} 
