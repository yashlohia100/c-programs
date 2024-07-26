/*
1 
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/
#include <stdio.h>

int main() {
  int n = 0;
  printf("Enter number of rows: ");
  scanf("%d", &n);

  int k = 1;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      printf("%d ", k++);
    }
    printf("\n");
  }

  return 0;
}