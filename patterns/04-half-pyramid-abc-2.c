/*
A
B B
C C C
D D D D
E E E E E
*/
#include <stdio.h>

int main() {
  int n = 0;
  printf("Enter number of rows: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      // printf("%d ", i);
      printf("%c ", i + 64);
    }
    printf("\n");
  }

  return 0;
}