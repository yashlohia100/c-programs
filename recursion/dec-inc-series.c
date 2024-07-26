#include <stdio.h>

void fun(int n) {
  static int orig = 16;
  static int decreasing = 1;

  if (n > orig) {
    return;
  }

  if (n < 0) {
    decreasing = 0;
  }

  if (decreasing) {
    printf("%d ", n);
    fun(n - 5);
  } else {
    printf("%d ", n);
    fun(n + 5);
  }
}

int main() {
  int n = 16;
  fun(16);
  return 0;
}