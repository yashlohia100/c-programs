#include <stdio.h>
#include <string.h>

int main() {
  char a[20] = "good";
  char b[20] = "boy";
  char temp[20] = "";

  strcpy(temp, a);
  strcpy(a, b);
  strcpy(b, temp);

  printf("%s\n", a);
  printf("%s\n", b);

  return 0;
}