#include <stdio.h>

int main() {
  char ch;
  FILE* fp1 = NULL;
  FILE* fp2 = NULL;

  fp1 = fopen("source.txt", "r");
  fp2 = fopen("destination.txt", "a");

  if (fp1 == NULL || fp2 == NULL) {
    printf("Error");
    return 0;
  }

  while (1) {
    ch = fgetc(fp1);

    if (ch == EOF) {
      break;
    }

    fputc(ch, fp2);
  }
  fputc('\n', fp2);

  printf("File copied\n");
  fclose(fp1);
  fclose(fp2);
  return 0;
}