#include <stdio.h>

void generateSeries(int n) {
  if (n <= 0) {
    printf("%d ", n);
    return;
  }

  printf("%d ", n);
  generateSeries(n - 5);
  printf("%d ", n);
}

int main() {
  generateSeries(15);
  return 0;
}