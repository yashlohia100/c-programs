/*
3
ed1ffcdc

ed1ffcdc
ed1ffcd0

ed1ffcd0
ed1ffcc8

3
3
3
ed1ffcdc
3
*/

#include <stdio.h>

int main() {
  int a = 3;
  int* b = &a;
  int** c = &b;

  printf("%d\n", a);
  // printf("%u\n", &a);
  printf("%x\n", &a);
  printf("\n");

  // printf("%u\n", b);
  printf("%x\n", b);
  // printf("%u\n", &b);
  printf("%x\n", &b);
  printf("\n");

  // printf("%u\n", c);
  printf("%x\n", c);
  // printf("%u\n", &c);
  printf("%x\n", &c);
  printf("\n");

  printf("%d\n", a);
  printf("%d\n", *(&a));
  printf("%d\n", *b);
  // printf("%u\n", *c);
  printf("%x\n", *c);
  printf("%d\n", **c);

  return 0;
}