#include <stdio.h>

int gcd(int a, int b) {
  if (b == 0) {
    return a;
  }

  return gcd(b, a % b);
}

int main() {
  printf("GCD: %d\n", gcd(36, 30));
  return 0;
}