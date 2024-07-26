#include <stdio.h>

int main() {
  int mat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int mat2[3][3] = {};
  int n = 3;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      mat2[j][n - 1 - i] = mat[i][j];
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%d ", mat2[i][j]);
    }
    printf("\n");
  }
  return 0;
}