/*
A 
A B 
A B C 
A B C D 
A B C D E
*/
#include <stdio.h>

int main() {
  int n = 0;
  printf("Enter number of rows: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      printf("%c ", j + 64);
    }
    printf("\n");
  }

  return 0;
}