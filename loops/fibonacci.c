#include <stdio.h>

int main() {
  int numTerms = 0;
  printf("Enter number of terms: ");
  scanf("%d", &numTerms);

  int a = 0, b = 1, t = 0;
  printf("%d, %d, ", a, b);

  for (int i = 3; i <= numTerms; i++) {
    t = a + b;
    printf("%d, ", t);
    a = b;
    b = t;
  }

  return 0;
}