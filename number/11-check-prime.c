// A prime number is a positive integer that is divisible only by 1 and itself.
// For example: 2, 3, 5, 7, 11, 13, 17.
#include <stdio.h>

int main() {
  int n = 0;
  printf("Enter a number: ");
  scanf("%d", &n);

  int flag = 1;
  // 0 and 1 are not prime numbers
  if (n == 0 || n == 1) {
    flag = 0;
  }

  for (int i = 2; i <= n / 2; i++) {
    // If n is divisible by i, then n is not prime
    if (n % i == 0) {
      flag = 0;
      break;
    }
  }

  if (flag) {
    printf("It is a prime number.\n");
  } else {
    printf("It is not a prime number.\n");
  }

  return 0;
}