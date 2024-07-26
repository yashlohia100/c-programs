#include <stdio.h>

int main() {
  int arr[10] = {10, 20, 30, 40, 50, 60, 70};
  int size = 7;

  int key = 25;
  int pos = 3;

  int i;
  for (i = size; i >= pos; i--) {
    arr[i] = arr[i - 1];
  }
  arr[i] = key;
  size++;

  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}