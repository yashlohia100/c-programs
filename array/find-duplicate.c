#include <stdio.h>

int main() {
  const int n = 6;
  int arr[10] = {2, 3, 7, 3, 5, -1,};

  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (arr[j] == arr[i]) {
        printf("Duplicate: %d\n", arr[i]);
        break;
      }
    }
  }

  return 0;
}