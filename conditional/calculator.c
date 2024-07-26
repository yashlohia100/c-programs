#include <stdio.h>

int main() {
  char op = '+';
  printf("Enter operator: ");
  scanf("%c", &op);

  float a = 0, b = 0;
  printf("Enter two numbers: ");
  scanf("%f%f", &a, &b);

  float result = 0;
  switch(op) {
    case '+':
      result = a + b;
      break;
    
    case '-':
      result = a - b;
      break;
    
    case '*':
      result = a * b;
      break;
    
    case '/':
      result = a / b;
      break;
    
    default:
      printf("Operator not supported\n");
  }

  printf("Result: %f", result);
  return 0;
}