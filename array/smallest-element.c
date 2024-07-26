#include <stdio.h>

int main() {
  int arr[7] = {2, -4, 7, 3, 8, -5, 0};

  int min = arr[0];
  for (int i = 1; i < 7; i++) {
    if (arr[i] < min) {
      min = arr[i];
    }
  }

  printf("Minimum: %d\n", min);
  return 0;
}