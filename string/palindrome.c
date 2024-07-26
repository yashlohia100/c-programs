#include <stdio.h>
#include <string.h>

int main() {
  char str[20] = "madam";
  printf("Enter string: %s");
  scanf("%s");
  
  int i = 0;
  int j = strlen(str) - 1;
  int flag = 1;

  while (i < j) {
    if (str[i] != str[j]) {
      flag = 0;
      break;
    }
    i++;
    j--;
  }

  if (flag) {
    printf("Palindrome.");
  } else {
    printf("Not Palindrome");
  }

  return 0;
}