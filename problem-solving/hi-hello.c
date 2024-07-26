#include <stdio.h>

int i;
int fun();

int fun() {
  printf("Hi");
}

int main() {
  while (i) {
    fun();
    main();
  }
  printf("Hello\n");
  return 0;
}