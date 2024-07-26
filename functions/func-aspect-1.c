// Without argument, without return type
#include <stdio.h>

// Declaration
void add();

// Definition
void add() {
  int a = 5, b = 3;
  int sum = a + b;
  printf("Sum: %d\n", sum);
}

int main() {
  // Calling
  add();  
  return 0;
}