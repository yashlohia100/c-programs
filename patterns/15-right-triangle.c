/*

*/
#include <stdio.h>

int main() {
  int n = 0;
  printf("Enter number of rows: ");
  scanf("%d", &n);

  for (int i = 1; i <= 2 * n - 1; i++) {
    for (int j = 1; j <= n; j++) {
      if (i == j || i + j == n * 2) {
        printf("* ");
      } else {
        printf("  ");
      }
    }
    printf("\n");
  }

  return 0;
}