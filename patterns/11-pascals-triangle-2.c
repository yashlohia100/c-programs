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

  for (int i = 1; i <= n; i++) {
    // Printing spaces
    for (int j = 1; j <= n - i; j++) {
      printf("  ");
    }

    int c = 1;
    for (int j = 1; j <= i; j++) {
      printf("%4d", c);
      c = c * (i - j) / j;
    }
    printf("\n");
  }

  return 0;
}