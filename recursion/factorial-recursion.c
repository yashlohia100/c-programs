#include <stdio.h>

int fact(int n) {
  if (n == 0) {
    return 1;
  }

  return n * fact(n - 1);
}

int main() {
  printf("Factorial: %d", fact(5));
  
  return 0;
}