// with argument, with return type
#include <stdio.h>

// Declaration
int add(int, int);

// Definition
int add(int a, int b) {
  return a + b;
}

int main() {
  int a = 5, b = 3;
  // Calling
  int sum = add(a, b);
  printf("Sum: %d\n", sum);
  return 0;
}
