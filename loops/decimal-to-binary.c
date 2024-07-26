#include <stdio.h>

int main() {
  int dec = 0;
  printf("Enter a decimal number: ");
  scanf("%d", &dec);

  long long bin = 0;
  int rem = 0;
  int i = 1;

  while (dec > 0) {
    rem = dec % 2;
    dec = dec / 2;
    bin += rem * i;
    i = i * 10;
  }

  printf("Binary: %d", bin);
  
  return 0;
}