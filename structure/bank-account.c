#include <stdio.h>

struct Customer {
  long accountNum;
  char name[10];
  double balance;
};

int main() {
  struct Customer arr[3];
  int n = 3;

  printf("Enter customer data\n");
  for (int i = 0; i < n; i++) {
    scanf("%ld %s %lf", &arr[i].accountNum, arr[i].name, &arr[i].balance);
  }

  for (int i = 0; i < n; i++) {
    printf("%d %s %f\n", arr[i].accountNum, arr[i].name, arr[i].balance);
  }

  return 0;
}