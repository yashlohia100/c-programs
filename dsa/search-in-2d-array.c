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

  int key = 0;
  printf("Enter key: ");
  scanf("%d", &key);

  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      if (a[i][j] == key) {
        printf("Element found\n");
        return 0;
      }
    }
  }
  
  printf("Element not found\n");
  return 0;
}