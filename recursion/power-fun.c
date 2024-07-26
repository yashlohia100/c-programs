#include <stdio.h>

int power(int base, int exp) {
  if (exp == 0) {
    return 1;
  }

  return base * power(base, exp - 1);
}

int main() {
  printf("Power: %d", power(2, 4));
  return 0;
}