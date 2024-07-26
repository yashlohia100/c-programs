#include <stdio.h>

int main() {
  const int SIZE = 10;
  int a[SIZE][SIZE];
  int res[SIZE][SIZE];

  int r = 3;
  int c = 3;
  
  // Input matrix
  printf("Enter first matrix\n");
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      scanf("%d", &a[i][j]);
    }
  }

  // Transpose the matrix
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      res[j][i] = a[i][j];
    }
  }

  // Print result matrix
  printf("Sum matrix\n");
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      printf("%d ", res[i][j]);
    }
    printf("\n");
  }
  
  return 0;
}