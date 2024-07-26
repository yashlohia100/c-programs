// Pronic number is a number which is the product of two consecutive integers,
// that is, a number n is a product of x and (x+1).
// e.g. 0, 2, 6, 12, 20, 30, 42
#include <stdio.h>

int main() {
  int n = 0;
  printf("Enter a number: ");
  scanf("%d", &n);

  int prod = 0;
  int flag = 0;
  for (int i = 1; i < n; i++) {
    prod = i * (i + 1);

    if (prod == n) {
      flag = 1;
      break;
    }
  }

  if (flag) {
    printf("It is a pronic number");
  } else {
    printf("It is not a pronic number");
  }

  return 0;
}