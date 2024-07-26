#include <stdio.h>

int main() {
  char ch;
  // int* fp = NULL;
  FILE* fp = NULL;

  fp = fopen("abc.txt", "r");
  
  if (fp == NULL) {
    printf("Unable to open file\n");
    return 0;
  }

  do {
    ch = fgetc(fp);
    printf("%c", ch);
  } while (ch != EOF);

  /*
  while (1) {
    ch = fgetc(fp);
    if (ch == EOF) {
      break;
    }

    printf("%c", ch);
  }
  */

  printf("\n");
  fclose(fp);
  return 0;
}