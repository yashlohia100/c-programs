#include <stdio.h>
#include <string.h>

int main() {
  char s1[20] = "name";
  char s2[20] = "mean";

  printf("Enter first string: ");
  scanf("%s", s1);
  // gets(s1);
  // fgets(s1, 20, stdin);

  printf("Enter second string: ");
  scanf("%s", s2);

  // Each character of first string should be there in second
  int isAnagram = 1;
  for (int i = 0; i < strlen(s1); i++) {
    char key = s1[i];

    // Search for key in second string
    int found = 0;
    for (int j = 0; j < strlen(s2); j++) {
      if (s2[j] == key) {
        found = 1;
        break;
      }
    }

    // If key is not found then string is not anagram
    if (!found) {
      isAnagram = 0;
      break;
    }
  }

  if (isAnagram) {
    printf("String is anagram");
  } else {
    printf("String is not anagram");
  }
  return 0;
}