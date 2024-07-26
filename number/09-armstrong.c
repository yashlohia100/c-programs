// A positive integer is called an Armstrong number (of order n) if
// abcd... = a^n + b^n + c^n + d^n +
// In the case of an Armstrong number of 3 digits, the sum of cubes of each digit is equal to the number itself.
// For example, 153 is an Armstrong number because
// 153 = 1*1*1 + 5*5*5 + 3*3*3
// e.g. 153, 371, 1634
#include <stdio.h>
#include <math.h>

int main() {
  int num = 0;
  printf("Enter a number: ");
  scanf("%d", &num);

  // Calculate number of digits
  int digits = 0;
  int n = num;
  while (n != 0) {
    digits++;
    n = n / 10;
  }

  n = num;
  int sum = 0;
  int digit = 0;
  int power = digits;
  while (n != 0) {
    digit = n % 10;
    sum += pow(digit, power);
    n = n / 10;
  }

  if (sum == num) {
    printf("It is armstrong\n");
  } else {
    printf("It is not armstrong\n");
  }

  return 0;
}