// An integer is a palindrome if the reverse of that number is equal to the original number.
// e.g. 121, 1221
#include <stdio.h>

int main() {
  int num = 0;
  printf("Enter a number: ");
  scanf("%d", &num);

  int n = num;
  int rev = 0;
  int digit = 0;

  while (n != 0) {
    digit = n % 10;
    rev = rev * 10 + digit;
    n = n / 10;
  }

  if (rev == num) {
    printf("Number is palindrome\n");
  } else {
    printf("Number is not palindrome");
  }

  return 0;
}