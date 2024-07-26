#include <stdio.h>

int main() {
  const int SIZE = 10;
  int a[SIZE][SIZE];

  int r = 3;
  int c = 3;
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

  printf("\nLeft diagonal: ");
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      if (i == j) {
        printf("%d ", a[i][j]);
      }
    }
  }
  
  printf("\nRignt diagonal: ");
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      if (i + j == r - 1) {
        printf("%d ", a[i][j]);
      }
    }
  }
  
  return 0;
}