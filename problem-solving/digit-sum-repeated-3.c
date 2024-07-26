// Find sum of digits of a number until sum becomes single digit
#include <stdio.h>

int digitSum(int n) {
  if (n == 0) {
    return 0;
  }

  return (n % 9 == 0) ? 9 : (n % 9);
}

int main() {
  printf("Result: %d", digitSum(12345));
  return 0;
}