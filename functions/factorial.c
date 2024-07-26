#include <stdio.h>

long int fact(int n);

long int fact(int n) {
  long int fact = 1;
  for (int i = 1; i <= n; i++) {
    fact *= i;
  }
  return fact;
}

int main() {
  int n = 0;
  printf("Enter number: ");
  scanf("%d", &n);

  printf("Factorial: %ld", fact(n));
  return 0;
}