/*
515898388
515898392
515898388
515898396
515898388
*/
#include <stdio.h>

int main() {
  int a = 10;
  int* ap = &a;

  printf("%u\n", ap);
  ap++;
  printf("%u\n", ap);
  ap--;
  printf("%u\n", ap);
  ap += 2;
  printf("%u\n", ap);
  ap -= 2;
  printf("%u\n", ap);
  
  return 0;
}