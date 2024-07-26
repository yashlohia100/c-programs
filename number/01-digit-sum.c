#include <stdio.h>

int main() {
  int n = 0;
  printf("Enter a number: ");
  scanf("%d", &n);

  int sum = 0;
  int digit = 0;
  while (n > 0) {
    digit = n % 10;
    sum = sum + digit;
    n = n / 10;
  }

  printf("Sum: %d", sum);

  return 0;
}