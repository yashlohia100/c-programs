#include <stdio.h>

int main() {
  float a = 10.12;
  int* pa = NULL;
  void* pv = NULL;

  pa = &a; // incorrect
  pv = &a; // correct

  // int* pa = 0;
  printf("%u\n", pa);
  printf("%d\n", *pa);
  printf("%u\n", pv);
  printf("%f\n", *(float*)pv);
  return 0;
}