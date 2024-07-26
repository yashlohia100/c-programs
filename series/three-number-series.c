// 1*2*3 + 2*3*4 + 3*4*5 + 4*5*6 + 5*6*7
#include <stdio.h>

int main() {
  int n = 5;
  long int sum = 0;
  for (int i = 1; i <= n; i++) {
    printf("%d*%d*%d + ", i, i + 1, i + 2);
    sum += i * (i + 1) * (i + 2);
  }

  printf("\nSum: %ld", sum);
  return 0;
}