#include <stdio.h>

int main() {
  int a[7] = {1, 6, 2, 3, 0, 3, 5};

  int key = 3;
  printf("Enter key to search: ");
  scanf("%d", &key);

  int found = 0;

  int i = 0;
  for (i = 0; i < 7; i++) {
    if (a[i] == key) {
      found = 1;
      break;
    }
  }

  if (found) {
    printf("Element found at index: %d\n", i);
  } else {
    printf("Element not found\n");
  }
  
  return 0;
}