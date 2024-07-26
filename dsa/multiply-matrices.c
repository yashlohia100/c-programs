#include <stdio.h>

int main() {
  const int SIZE = 10;
  // int a[SIZE][SIZE];
  // int b[SIZE][SIZE];
  int res[SIZE][SIZE];

  int a[10][10] = {{1, 0, -2}, {3, 7, 2}, {1, 4, 5}};
  int b[10][10] = {{2, -1, 0, 3}, {1, -2, 5, 1}, {-2, 4, 2, 3}};

  int r1 = 3;
  int c1 = 3;

  int r2 = 3;
  int c2 = 4;

  if (c1 != r2) {
    printf("Multiplication not possible\n");
    return 0;
  }

  int r3 = r1;
  int c3 = c2;

  for (int i = 0; i < r3; i++) {
    for (int j = 0; j < c3; j++) {
      int sum = 0;
      for (int k = 0; k < c1; k++) {
        sum += a[i][k] * b[k][j];
      }
      res[i][j] = sum;
    }
  }

  for (int i = 0; i < r3; i++) {
    for (int j = 0; j < c3; j++) {
      printf("%4d ", res[i][j]);
    }
    printf("\n");
  }

  return 0;
}