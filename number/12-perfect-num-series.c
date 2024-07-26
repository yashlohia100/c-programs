// 6, 28, 496
#include <stdio.h>

int main() {
  for (int num = 1; num <= 1000; num++) {

    // Check if num is a perfect number
    int sum = 0;
    for (int i = 1; i < num; i++) {
      if (num % i == 0) {
        sum += i;
      }
    }

    if (sum == num) {
      printf("%d, ", num);
    }
  }
  
  return 0;
}