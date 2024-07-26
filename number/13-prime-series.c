// 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47
#include <stdio.h>

int main() {
  for (int num = 2; num <= 500; num++) {
    // Check if num is a prime number
    int flag = 1;
    for (int i = 2; i <= num / 2; i++) {
      if (num % i == 0) {
        flag = 0;
        break;
      }
    }

    if (flag) {
      printf("%d, ", num);
    }
  }

  return 0;
}