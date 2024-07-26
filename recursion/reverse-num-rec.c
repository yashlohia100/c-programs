#include <stdio.h>

int reverseNum(int n) {
  static int rev = 0;

  if (n == 0) {
    return rev;
  }

  int digit = n % 10;
  rev = rev * 10 + digit;
  return reverseNum(n / 10);
}

int main() {
  printf("Reversed: %d", reverseNum(1234));
  return 0;
}