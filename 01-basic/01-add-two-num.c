#include <stdio.h>

int main() {
  int a = 0;
  int b = 0;
  
  printf("Enter two numbers: ");
  scanf("%d%d", &a, &b);

  int sum = a + b;
  
  printf("Sum: %d", sum);
  
  return 0;
}