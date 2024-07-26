// Find sum of digits of a number until sum becomes single digit
#include <stdio.h>

int digitSum(int num) {
  while (num > 9) {
    int sum = 0;
    while (num != 0) {
      int digit = num % 10;
      sum += digit;
      num /= 10;
    }
    num = sum;
  }
  return num;
}

int main() {
  printf("Result: %d", digitSum(12345));
  return 0;
}