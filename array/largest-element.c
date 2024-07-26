#include <stdio.h>

int main() {
  int arr[7] = {2, -4, 7, 3, 8, 1, 0};

  int max = arr[0];
  for (int i = 1; i < 7; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }

  printf("Maximum: %d\n", max);
  return 0;
}