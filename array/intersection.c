#include <stdio.h>

int main() {
  int a[5] = {1, 2, 3, 4, 5};
  int b[5] = {8, 7, 3, 5, 0};

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      if (b[j] == a[i]) {
        printf("%d ", a[i]);
        break;
      }
    }
  }

  return 0;
}