#include <stdio.h>


// Своя функция
int square(int x) { 
  return x * x; 
}

int main() {
  int n = 5;

  // Условие
  if (n > 0) {
    // Цикл (старт; условие перед итерацией; действие после итерации)
    for (int i = 0; i < n; ++i) {
      printf("%d\n", square(i));
    }
  }

  return 0;
}
