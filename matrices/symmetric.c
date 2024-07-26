#include <stdio.h>

int main() {
  int mat[5][5] = {0};
  int n = 5;

  printf("Enter matrix: \n");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%d", &mat[i][j]);
    }
  }

  int flag = 1;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i; j++) {
      if (mat[i][j] != mat[j][i]) {
        flag = 0;
      }
    }
  }

  if (flag) {
    printf("Symmetric\n");
  } else {
    printf("Not symmetric\n");
  }
  
  return 0;
}