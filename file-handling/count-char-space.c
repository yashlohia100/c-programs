#include <stdio.h>

int main() {
  FILE *fp = NULL;

  fp = fopen("abc.txt", "r");

  if (fp == NULL) {
    printf("Unable to open file\n");
    return 0;
  }

  char ch;
  int blank = 0, tabs = 0, chars = 0, newlines = 0;

  do {
    ch = fgetc(fp);

    if (ch == ' ') {
      blank++;
    }
    if (ch == '\t') {
      tabs++;
    }
    if (ch == '\n') {
      newlines++;
    }

    chars++;
  } while (ch != EOF);

  printf("Blank spaces: %d\n", blank);
  printf("Tabs: %d\n", tabs);
  printf("Characters: %d\n", chars);
  printf("New lines: %d\n", newlines);

  fclose(fp);

  return 0;
}