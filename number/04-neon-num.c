// A neon number is a number where the sum of digits of the square of the number is equal to the number.
// e.g. 9 (9^2 = 81 | 8 + 1 = 9)
#include <stdio.h>

int main() {
  int n = 0;
  printf("Enter a number: ");
  scanf("%d", &n);

  int sq = n * n;
  int sum = 0;
  int digit = 0;

  while (sq > 0) {
    digit = sq % 10;
    sum = sum + digit;
    sq = sq / 10;
  }

  if (sum == n) {
    printf("It is a neon number");
  } else {
    printf("It is not a neon number");
  }

  return 0;
}