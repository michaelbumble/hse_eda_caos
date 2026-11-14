#include <stdio.h>
#include <string.h>

int main() {
  // C-строка, то же что char s[] = {'a', 'b', 'c', '\0'};
  char s[] = "abc"; 

  // Строковый литерал, как C-строка, но не редактируется
  char *literal = "abc";

  printf("sizeof(s): %zu\n", sizeof(s));
  printf("strlen(s): %zu\n", strlen(s));
  printf("sizeof(literal pointer): %zu\n", sizeof(literal));
  printf("strlen(literal): %zu\n", strlen(literal));

  s[0] = 'A';
  printf("modified array: %s\n", s);

  /* literal[0] = 'A'; — запись в строковый литерал запрещена. */
  return 0;
}
