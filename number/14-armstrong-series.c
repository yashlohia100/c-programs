// 1, 153, 370, 371, 407
#include <stdio.h>

int main() {
  for (int num = 1; num <= 500; num++) {
    // Check if num is an armstrong number
    // Sum of cube of digits should be equal to number itself
    int sum = 0;
    int digit = 0;
    int n = num;
    while (n != 0) {
      digit = n % 10;
      sum += digit * digit * digit;
      n = n / 10;
    }

    if (sum == num) {
      printf("%d, ", num);
    }
  }

  return 0;
}