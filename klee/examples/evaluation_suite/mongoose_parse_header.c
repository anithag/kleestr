/*
 *  Test inspired by Mongoose webserver. Problem is it aliases into the string
 *  which breaks kleestr.
 */

#include <klee/klee.h>
#include <stddef.h>

static int parse_header(const char *str, size_t str_len, const char *var_name,
                        char *buf, size_t buf_size) {
  int ch = ' ', ch1 = ',', len = 0;
  size_t n = strlen(var_name);
  const char *p, *end = str + str_len, *s = str;

  if (buf != NULL && buf_size > 0) buf[0] = '\0';

  // Find where variable starts
  // for (s = str; s != NULL && s + n < end; s++) {
  //   if ((s == str || s[0] == ch || s[0] == ch1) && s[str_len-3] == '=' /*&&
  //       !memcmp(s, var_name, n)*/) break;
  // }
  
  // for (s = str; s != NULL && s + n < end; s++) {
  //   if (s[str_len-3] == '=') 
  //     break;
  // }

  if (s != NULL && &s[n + 1] < end) {
    s += n + 1;
    if (*s == '"' || *s == '\'') ch = ch1 = *s++;
    p = s;
    while (p < end && p[0] != ch && p[0] != ch1 && len < (int) buf_size) {
      if (ch == ch1 && p[0] == '\\' && p[1] == ch) p++;
      buf[len++] = *p++;
    }
    if (len >= (int) buf_size || (ch != ' ' && *p != ch)) {
      len = 0;
    } else {
      if (len > 0 && s[len - 1] == ',') len--;
      if (len > 0 && s[len - 1] == ';') len--;
      buf[len] = '\0';
    }
  }

  return len;
}

int main() {
  int str_len = 25;
  int var_len = 25;
  int buf_len = 25;
  char str[str_len], var_name[var_len], buf[buf_len];
  klee_make_symbolic(str, str_len, "string");
  klee_make_symbolic(var_name, var_len, "var_name");
  klee_make_symbolic(buf, buf_len, "buf");
  return parse_header(str, str_len, var_name, buf, buf_len);
}