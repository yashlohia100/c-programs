// 1!/1 + 2!/2 + 3!/3 + ... + n!/n
#include <stdio.h>

long int factorial(int n) {
  if (n == 0 || n == 1) {
    return 1;
  }

  long int fact = 1;
  for (int i = 1; i <= n; i++) {
    fact = fact * i;
  }

  return fact;
}

int main() {
  int n = 10;
  long int sum = 0;
  long int fact = 0;

  for (int i = 1; i <= n; i++) {
    fact = factorial(i);
    printf("%ld ", fact / i);
    sum += fact / i;
  }

  printf("\nSum: %ld", sum);
  
  return 0;
}
