// A number n is said to be an Abundant Number if the sum of all the
// proper divisors of the number denoted by sum(n) is greater than the
// value of the number n. And the difference between these two values is called abundance.
// e.g. 12, 18, 20, 24, 30, 36, 40
#include <stdio.h>

int main() {
  int num = 0;
  printf("Enter a number: ");
  scanf("%d", &num);

  int sumOfDivisors = 0;
  for (int i = 1; i < num; i++) {
    if (num % i == 0) {
      sumOfDivisors += i;
    }
  }

  if (sumOfDivisors > num) {
    printf("It is an abundand number");
  } else {
    printf("It is not an abundand number");
  }

  return 0;
}