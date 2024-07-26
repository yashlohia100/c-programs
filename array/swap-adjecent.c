#include <stdio.h>

int main() {
  int arr[] = {2, 3, 4, 6, 1, 8};
  
  int temp = 0;
  for (int i = 0; i < 6; i+=2) {
    temp = arr[i];
    arr[i] = arr[i + 1];
    arr[i + 1] = arr[i];
  }

  return 0;
}