#include <stdio.h>
#include <string.h>

int main() {
  char a[20] = "Good ";
  char b[20] = "Morning";

  // Append b in a
  int n = strlen(a);
  for (int i = 0; a[i] != '\0'; i++) {
    a[n + i] = b[i];
  }

  printf("%s\n", a);

  return 0;
}