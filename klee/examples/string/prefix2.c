#include <klee/klee.h>
#include <stdlib.h>

int prefix(char *x) {

 int i=0;
 char *dictionary = {"Hello World"};
 for(; x[i] !='\0'; i++) {
    if(dictionary[i] == x[i])
           continue;
    else
           return -1;
  }
 
  return 1; //it is a prefix
 
}

int main() {
  int size;
  char *a;
  a = (char *)malloc(size);
  klee_make_symbolic(&size, sizeof(size), "size");
  klee_make_symbolic(a, size, "a");
  klee_assume(size <= 10);
  klee_assume(a[9] ='\0');
  return prefix(a);
} 
