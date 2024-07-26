#include <stdio.h>

int main() {
  int a, b, c;
  printf("Enter three numbers: ");
  scanf("%d%d%d", &a, &b, &c);

  if (a > b) {
    if (a > c) {
      printf("Greater: %d", a);
    } else {
      printf("Greater: %d", c);
    }
  } else {
    if (b > c) {
      printf("Greater: %d", b);
    } else {
      printf("Greater: %d", c);
    }
  }
  
  return 0;
}