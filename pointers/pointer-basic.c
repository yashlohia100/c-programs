#include <stdio.h>

int main() {
  int a = 5;
  int* b = &a;
  int* c = &a;

  printf("%u\n", sizeof(a));
  printf("%u\n", sizeof(b));

  printf("%u\n", b);
  b = b + 1;
  // b = b + c;
  printf("%u\n", b);
  return 0;
}