#include <stdlib.h>
#include <stdio.h>

int main(int argv, char *argc) {

  int *c;
  c = (int *) malloc(argc[1]);
  printf("Successfully allocated %d bytes\n", argc[1]);
  return 1;
}
