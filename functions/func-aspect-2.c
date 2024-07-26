// Without argument, with return type
#include <stdio.h>

// Declaration
int add();

// Definition
int add() {
  int a = 5, b = 3;
  return a + b;
}

int main() {
  // Calling
  int sum = add();
  printf("Sum: %d\n", sum);
  return 0;
}
