#include <stdio.h>

int main() {
  char str[20] = "Good Luck! 123";
  int alpha = 0;
  int digit = 0;
  int special = 0;
  char ch = 'a';
  for (int i = 0; str[i] != '\0'; i++) {
    ch = str[i];
    if (ch >= 65 && ch <= 90 || ch >= 97 && ch <= 122) {
      alpha++;
    } else if (ch >= 48 && ch <= 122) {
      digit++;
    } else {
      special++;
    }
  }

  printf("Alphabets: %d\n", alpha);
  printf("Digits: %d\n", digit);
  printf("Special characters: %d\n", special);
  return 0;
}