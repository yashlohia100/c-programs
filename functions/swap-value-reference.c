#include <stdio.h>

void swapByValue(int x, int y) {
  int temp = x;
  x = y;
  y = temp;
}

void swapByReference(int* x, int* y) {
  int temp = *x;
  *x = *y;
  *y = temp;
}

int main() {
  int a = 3;
  int b = 5;

  printf("Before swapping: %d %d\n", a, b);
  // swapByValue(a, b);
  swapByReference(&a, &b);
  printf("After swapping: %d %d\n", a, b);

  return 0;
}