/*
             1
           1   1
         1   2   1
       1   3   3   1
     1   4   6   4   1
   1   5  10  10   5   1
*/
#include <stdio.h>

int main() {
  int n = 0;
  printf("Enter number of rows: ");
  scanf("%d", &n);

  int coef = 1;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      printf("  ");
    }

    for (int j = 0; j <= i; j++) {
      if (j == 0) {
        coef = 1;
      } else {
        coef = coef * (i - j + 1) / j;
      }
      printf("%4d", coef);
    }

    printf("\n");
  }

  return 0;
}