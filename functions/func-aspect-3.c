// With argument, without return type
#include <stdio.h>

// Declaration
void add(int, int);

// Definition
void add(int a, int b) {
  int sum = a + b;
  printf("Sum: %d\n", sum);
}

int main() {
  int a = 5, b = 3;
  // Calling
  add(a, b);
  return 0;
}