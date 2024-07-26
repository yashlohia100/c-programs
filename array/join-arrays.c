#include <stdio.h>

int main() {
  int a[5] = {1, 2, 3, 4, 5};
  int b[5] = {6, 7, 8, 9, 10};
  int c[10] = {0};

  int k = 0;
  for (int i = 0; i < 5; i++) {
    c[k++] = a[i];
  }

  for (int i = 0; i < 5; i++) {
    c[k++] = b[i];
  }

  for (int i = 0; i < 10; i++) {
    printf("%d ", c[i]);
  }

  return 0;
}