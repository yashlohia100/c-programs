// Find index of two elements whose sum is equal to the target value
#include <stdio.h>

int main() {
  int arr[10] = {2, 3, 4, 1, 6};
  int n = 5;
  int target = 7;

  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (arr[i] + arr[j] == target) {
        printf("(%d, %d)\n", i, j);
      }
    }
  }

  return 0;
}