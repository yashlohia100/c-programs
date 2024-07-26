#include <stdio.h>

int main() {
  int arr[10] = {2, 3, 6, 1, 3, 1, 3, 5, 3, 5};
  int n = 10;

  int ele[10] = {0};
  int k = 0;

  for (int i = 0; i < n - 1; i++) {
    int count = 1;
    int key = arr[i];

    for (int j = i + 1; j < n; j++) {
      if (arr[j] == key) {
        count++;
      }
    }

    int flag = 0;
    for (int i = 0; i < k; i++) {
      if (arr[i] == key) {
        flag = 1;
      }
    }

    if (!flag) {
      ele[k++] = key;
      printf("%d occurs %d times\n", key, count);
    }

  }

  return 0;
}