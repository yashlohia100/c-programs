#include <stdio.h>

int fibonacci(int n) {
  if (n == 0 || n == 1) {
    return n;
  }

  return fibonacci(n - 2) + fibonacci(n - 1);
}

int main() {
  for (int i = 0; i < 10; i++) {
    printf("%d ", fibonacci(i));
  }
  
  return 0;
}