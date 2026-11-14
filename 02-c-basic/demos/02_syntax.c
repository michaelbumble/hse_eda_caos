#include <stdio.h>

int square(int x) { 
  return x * x; 
}

int main() {
  int n = 5;

  if (n > 0) {
    for (int i = 0; i < n; ++i) {
      printf("%d\n", square(i));
    }
  }

  return 0;
}
