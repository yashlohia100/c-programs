// A perfect number is a positive integer that is equal to the
// sum of its positive divisors, excluding the number itself
// e.g. 6 (1 + 2 + 3 = 6) 28 (1 + 2 + 4 + 7 + 14 = 28)
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

  if (sumOfDivisors == num) {
    printf("Perfect number");
  } else {
    printf("Not a perfect number");
  }

  return 0;
}