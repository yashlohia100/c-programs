// Find sum of digits of a number until sum becomes single digit
#include <stdio.h>

int digitSum(int num) {
  int sum = 0;
  while (num > 0 || sum > 9) {
    if (num == 0) {
      num = sum;
      sum = 0;
    }

    sum += num % 10;
    num /= 10;
  }
  return sum;
}

int main() {
  printf("Result: %d", digitSum(12345));
  return 0;
}