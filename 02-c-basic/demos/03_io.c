#include <stdio.h>

int main() {
  int x = 42;            // Знаковое число, обычно 4 байта
  unsigned int u = 42;   // Беззнаковое число, столько же байт, сколько int
  char c = 'A';          // Символ, 1 байт
  long l = 123456789L;   // Знаковое большое число, обычно 8 байт
  size_t z = sizeof(l);  // Беззнаковое большое число, используется для размеров и адресов в памяти
  float f = 3.14159f;    // Нецелое число

  printf("int: %d\n", x);
  printf("unsigned: %u\n", u);
  printf("char as char: %c\n", c);
  printf("char as int: %d\n", c);
  printf("long: %ld\n", l);
  printf("size_t: %zu\n", z);
  printf("float: %f / %.2f\n", f, f);

  printf("int: %-4d\n", x);

  unsigned a, b;
  
  if (scanf("%u%u", &a, &b) != 2) {
    fprintf(stderr, "Expected two unsigned integers\n");
    return 1;
  }

  printf("read: %u %u\n", a, b);
  return 0;
}
