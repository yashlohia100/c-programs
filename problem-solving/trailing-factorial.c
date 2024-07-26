#include <stdio.h>

long int fact(int n) {
  long int fact = 1;
  for (int i = 1; i <= n; i++) {
    fact *= i;
  }
  return fact;
}

int main() {
  long int res = fact(5);

  int digit = 0;
  int count = 0;
  while (res > 0) {
    digit = res % 10;
    
    if (digit == 0) {
      count++;
    } else {
      break;
    }
    
    res = res / 10;
  }

  printf("Trailing zeroes: %d\n", count);
  
  return 0;
}