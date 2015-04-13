/*
 * First KLEE tutorial: testing a small function
 */

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
  int len;
  char *a;
  a = (char *)malloc(len);
  klee_make_symbolic(&len, sizeof(len), "len");
  return prefix(a);
} 
