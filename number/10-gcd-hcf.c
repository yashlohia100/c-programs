#include <stdio.h>

int main() {
  int a = 0, b = 0;
  printf("Enter two numbers: ");
  scanf("%d%d", &a, &b);

  int gcd = 0;
  for (int i = 2; i <= a && i <= b; i++) {
    if (a % i == 0 && b % i == 0) {
      gcd = i;
    }
  }

  printf("GCD: %d\n", gcd);
  return 0;
}