#include <stdio.h>
#include <string.h>

int main() {
  char a[20] = "Good";
  char b[20] = "morning";

  printf("%s\n", a);
  printf("%s\n", b);

  printf("Len: %d\n", strlen(a));
  // printf("%s\n", strcat(a, b));
  b=strrev(a);
  printf("%s\n", strlwr(a));
  printf("%s\n", strupr(a));
  // strcpy(a, b);
  printf("%s\n", strcpy(a, b));
  printf("%s\n", a);

  char c[10] = "Good";
  char d[10] = "good";

  int x = strcmp(c, d);
  printf("Result: %d\n", x);
  
  return 0;
}