#include <stdio.h>

int main() {
  int n = 30;
  int count = 0;
  for (int i = 1; i <= n; i++) {
    int x = i;
    while (x % 5 == 0) {
      printf("%d ", x);
      count++;
      x /= 5;
    }
  }
  
  printf("\nTrailing zeroes: %d\n", count);
  return 0;
}