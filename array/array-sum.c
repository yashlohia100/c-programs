#include <stdio.h>

int main() {
  // int n = 4;
  int arr[] = {3, 4, 5, 6};

  int n = sizeof(arr) / sizeof(arr[0]);

  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += arr[i];
  }

  printf("Sum: %d", sum);

  return 0;
}