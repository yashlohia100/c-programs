#include <stdio.h>

int main() {
  // char str[20] = "mountains";
  char str[20];

  printf("Enter string: ");
  gets(str);
  // scanf("%s", &str);
  // scanf("%c");

  char ch;
  printf("Enter character: ");
  scanf("%c", &ch);

  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
      str[i] = ch;
    }
  }

  printf("%s\n", str);
  return 0;
}