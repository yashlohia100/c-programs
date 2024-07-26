#include <stdio.h>
#include <string.h>

int main() {
  char str[20] = "Abcd";
  for (int i = 0; i < strlen(str); i++) {
    printf("%d ", str[i]);
  }
  return 0;
}