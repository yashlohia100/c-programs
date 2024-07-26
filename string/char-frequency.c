#include <stdio.h>

int main() {
  char str[20] = "madam";
  char ch = 'a';
  int count = 0;
  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] == ch) {
      count++;
    }
  }

  printf("Frequency: %d\n", count);
  return 0;
}