#include <stdio.h>

void inspect_parameter(int *a) {
  // теперь a не массив, а просто указатель и его sizeof - размер указателя
  printf("sizeof(parameter): %zu\n", sizeof(a));
  
  // с указателем можем обращаться к элементам массива
  // *(a + N) <=> a[N] <=> 'адрес' + N * sizeof(a[0])
  printf("first element through parameter: %d\n", *(a + 2));
}

int main() {
  int a[3] = {10, 20, 3};

  printf("sizeof(array): %zu\n", sizeof(a));
  printf("number of elements: %zu\n", sizeof(a) / sizeof(a[0]));
  printf("a[1]: %d\n", a[0]);
  printf("*a: %d\n", *a);
  printf("*(a + 1): %d\n", *(a + 1));

  inspect_parameter(a);
  return 0;
}
