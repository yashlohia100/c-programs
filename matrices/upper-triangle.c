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

  printf("\n");
  // Find upper elements
  int sum = 0;
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      if (i < j) {
        printf("%d ", a[i][j]);
        sum += a[i][j];
      }
    }
  }

  printf("\nSum: %d", sum);
  
  return 0;
}