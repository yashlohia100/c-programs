#include <stdio.h>

void swap(int* a, int* b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void transpose(int mat[3][3], int n) {
  // Transpose
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i; j++) {
      swap(&mat[i][j], &mat[j][i]);
    }
  }
}

void rotate90(int mat[3][3], int n) {
  transpose(mat, n);

  // Reverse every row
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < (n / 2); j++) {
      swap(&mat[i][j], &mat[i][n - 1 - j]);
    }
  }
}

void printMatrix(int mat[3][3], int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%d ", mat[i][j]);
    }
    printf("\n");
  }
}

int main() {
  int mat[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
  };
  
  rotate90(mat, 3);
  printMatrix(mat, 3);
  return 0;
}