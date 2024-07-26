#include <stdio.h>

int main() {
  const int SIZE = 10;
  int a[SIZE][SIZE];

  int r = 3;
  int c = 3;
  
  // Input matrix
  printf("Enter matrix\n");
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      scanf("%d", &a[i][j]);
    }
  }

  // Find sum of even and odd elements
  int sum_even = 0;
  int sum_odd = 0;
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      if (a[i][j] % 2 == 0) {
        sum_even += a[i][j];
      } else {
        sum_odd += a[i][j];
      }
    }
  }

  printf("Sum odd: %d\n", sum_odd);
  printf("Sum even: %d\n", sum_even);
  
  return 0;
}