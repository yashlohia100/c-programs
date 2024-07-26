#include <stdio.h>

int main() {
  const int SIZE = 10;
  int a[SIZE][SIZE];
  int b[SIZE][SIZE];
  int res[SIZE][SIZE];

  int r = 2;
  int c = 2;

  // Input first matrix
  printf("Enter first matrix\n");
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      scanf("%d", &a[i][j]);
    }
  }
  
  // Input second matrix
  printf("Enter second matrix\n");
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      scanf("%d", &b[i][j]);
    }
  }

  // Sum corresponding elements
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      res[i][j] = a[i][j] + b[i][j];
    }
  }

  // Print sum matrix
  printf("Sum matrix\n");
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      printf("%d ", res[i][j]);
    }
    printf("\n");
  }

  return 0;
}