#include <stdio.h>

int main() {
  char str[50] = "I love big\tmountains\n.Rivers";
  int words = 0;

  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
      words++;
    }
  }

  printf("%s\n", str);

  printf("Words: %d\n", words + 1);
  return 0;
}