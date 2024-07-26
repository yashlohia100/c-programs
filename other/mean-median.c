#include <stdio.h>

// Average value
float mean(int arr[], int n) {
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += arr[i];
  }
  return (float) sum / n;
}

// Central value on sorted array
float median(int arr[], int n) {
  if (n % 2 == 0) {
    int mid = n / 2;
    return (float) (arr[mid - 1] + arr[mid]) / 2;
  } else {
    int mid = n / 2;
    return arr[mid];
  }
}

int main() {
  int arr[6] = {1, 2, 3, 4, 5, 6};
  int n = sizeof(arr) / sizeof(arr[0]);
  printf("Mean: %f\n", mean(arr, n));
  printf("Median: %f\n", median(arr, n));
  return 0;
}