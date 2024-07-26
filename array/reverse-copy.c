#include <stdio.h>

void main() {
  int a[5] = {1, 2, 3, 4, 5};
  int b[5];

  // printf("Enter array elements: ");
  // for (int i = 0; i < 5; i++) {
  //   scanf("%d", &a[i]);
  // }

  int j = 5 - 1;
  for (int i = 0; i < 5; i++) {
    b[j] = a[i];
    j--;
  }

  for (int i = 0; i < 5; i++) {
    printf("%d ", b[i]);
  }
}