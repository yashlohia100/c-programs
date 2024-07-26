#include <stdio.h>
#include <string.h>

int main() {
  char str[20] = "yash";
  int len = strlen(str);

  for (int i = 0; i < len; i++) {
    for (int j = i; j < len - 1; j++) {
      if (str[i] > str[i + 1]) {
        char ch = str[i];
        str[i] = str[i + 1];
        str[i + 1] = ch;
      }
    }
  }

  printf("%s\n", str);
  return 0;
}