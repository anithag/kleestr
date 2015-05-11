/*
*  Performs many different string operations to ensure all different operators perform.
*  Tests to make sure klee_assert and klee_assume work with the new features.
*/

#include <klee/klee.h>

int cmp_len(char *x, char *y, int i) {
  
  if(strcmp(x, y)) {
	if(strlen(x) >= 10 ) 
          return i+1;
	else
	   return i;
  }
  else
          return i-1;
  
} 

int cmp_str (char *a, char *b, int len) {
  int comparison = strcmp(a,"bb");
  if (strcmp(a,b)) {
    if (strcmp(a,b) > 0) {
      return len + 2*comparison;
    }
    else 
      return len - comparison;
  }
  return 0;
}

int main() {
  char a[100];
  char b[100];
  char str3[100];
  char str4[50];
  char str5[100];
  char str6[100];
  int len = 5;
  int i;
  klee_make_symbolic(a, 100, "str1");
  klee_make_symbolic(b, 100, "str2");
  klee_make_symbolic(str3, 100, "str3");
  klee_make_symbolic(str4, 50, "str4");
  klee_make_symbolic(str5, 100, "str5");
  klee_make_symbolic(str6, 100, "str6");
  //klee_make_symbolic(&len, sizeof(int), "len");

  // Sanity checks -- make sure klee_assert is working properly
  klee_assert(strcmp("a", "a") == 0);
  klee_assert(strlen(a) + strlen("b") == strlen(a)+1);
  klee_assume(strlen(a) + 1 > strlen(a));
  return cmp_str(a, b, len);
  // klee_assert(strlen("c") > 0);
  // // This should fails when klee generates a case not covered here
  // klee_assert((result == 0 & strlen(a) == strlen(b)) | ((result > 0) & strlen(a) > strlen(b)) |  (result < 0 & (strlen(a) < strlen(b))));
  
  // // Make str3 longer than str4. strcmp should always be positive.
  // klee_assume(strlen(str3) > strlen(str4));
  // int result2 = cmp_str(str3, str4, len);
  // klee_assert(result2 > 0);

  // return result;
} 