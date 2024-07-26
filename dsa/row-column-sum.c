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

  // Row wise sum
  for (int i = 0; i < r; i++) {
    int sum = 0;
    for (int j = 0; j < c; j++) {
      sum += a[i][j];
    }
    printf("Sum of %d row: %d\n", i, sum);
  }
  
  // Column wise sum
  for (int i = 0; i < c; i++) {
    int sum = 0;
    for (int j = 0; j < r; j++) {
      sum += a[j][i];
    }
    printf("Sum of %d column: %d\n", i, sum);
  }

  return 0;
}