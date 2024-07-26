#include <stdio.h>
#include <string.h>

int main() {
  char a[20] = "abcd";
  char b[20];

  int k = 0;
  for (int i = strlen(a) - 1; i >= 0; i--) {
    b[k++] = a[i];
  }

  printf("%s\n", b);
  return 0;
}