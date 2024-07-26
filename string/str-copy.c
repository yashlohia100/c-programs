#include <stdio.h>

int main() {
  char str[20] = "Mountain";
  char b[20];

  int i = 0
  for (i = 0; str[i] != '\0'; i++) {
    b[i] = str[i];
  }
  b[i] = '\0';
  
  printf("%s\n", b);
  return 0;
}