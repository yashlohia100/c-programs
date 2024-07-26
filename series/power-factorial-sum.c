// 1 + x^1/1! + x^2/2! + x^3/3! + ... + x^n/n!
#include <stdio.h>
#include <math.h>

long int power(int base, int exp) {
  long int result = 1;
  for (int i = 0; i < exp; i++) {
    result *= base;
  }
  return result;
}

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
  int x = 2;
  int n = 5;
  double sum = 0.0;

  for (int i = 0; i <= n; i++) {
    double term = (double) power(x, i) / factorial(i);
    // double term = pow(x, i) / factorial(i);
    printf("%f ", term);
    sum += term;
  }

  printf("\nSum: %f", sum);
  
  return 0;
}