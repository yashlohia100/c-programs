#include <stdio.h>

int main() {
  
  const int SIZE = 10;
  int a[SIZE][SIZE];

  int r = 0;
  int c = 0;
  printf("Enter rows: ");
  scanf("%d", &r);
  printf("Enter columns: ");
  scanf("%d", &c);
  
  // Input matrix
  printf("Enter matrix\n");
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      scanf("%d", &a[i][j]);
    }
  }

  // Transpose the matrix
  for (int i = 0; i < r; i++) {
    for (int j = i; j < c; j++) {
      int temp = a[i][j];
      a[i][j] = a[j][i];
      a[j][i] = temp;
    }
  }

  // Print result matrix
  printf("Sum matrix\n");
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }
  
  return 0;
}