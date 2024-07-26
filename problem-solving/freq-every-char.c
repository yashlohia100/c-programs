#include <stdio.h>

int main() {
  char str[20] = "abbc";
  int freq[26] = {0};

  for (int i = 0; str[i] != '\0'; i++) {
    int idx = str[i] - 97;
    // printf("%d ", idx);
    freq[idx] += 1;
  }

  for (int i = 0; i < 26; i++) {
    if (freq[i]) {
      printf("%c: %d\n", i + 97, freq[i]);
    }
  }

  return 0;
}