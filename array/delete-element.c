#include <stdio.h>

int main() {
  int arr[10] = {10, 20, 30, 40, 50, 60, 70};
  int size = 7;

  int pos = 3;

  for (int i = pos - 1; i < size - 1; i++) {
    arr[i] = arr[i + 1];
  }
  size--;

  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  
  return 0;
}