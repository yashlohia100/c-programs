// An integer number in base 10 which is divisible by the sum of its digits is said to be a Harshad Number or Niven Number.
// An n-Harshad number is an integer number divisible by the sum of its digit in base n.
// 10, 12, 18, 20, 42
#include <stdio.h>

int main() {
  int num = 0;
  printf("Enter a number: ");
  scanf("%d", &num);

  int n = num;
  int sum = 0;
  int digit = 0;
  while (n > 0) {
    digit = n % 10;
    sum = sum + digit;
    n = n / 10;
  }

  if (num % sum == 0) {
    printf("It is a harshad number");
  } else {
    printf("It is not a harshad number");
  }

  return 0;
}