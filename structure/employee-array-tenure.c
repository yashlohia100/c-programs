#include <stdio.h>

struct Employee {
  int emp_code;
  char name[20];
  int year;
} arr[3];

int main() {
  int n = 3;
  for (int i = 0; i < n; i++) {
    printf("\nEnter employee code: ");
    scanf("%d", &arr[i].emp_code);
    // scanf("%c");
    // gets();

    printf("Enter name: ");
    scanf("%s", arr[i].name);

    printf("Enter year of joining: ");
    scanf("%d", &arr[i].year);
  }

  for (int i = 0; i < n; i++) {
    printf("\nEmp code: %d", arr[i].emp_code);
    printf("\nName: %s", arr[i].name);
    printf("\nYear: %d", arr[i].year);
    printf("\n");
  }

  int currYear = 0;
  printf("\nEnter current year: ");
  scanf("%d", &currYear);

  for (int i = 0; i < n; i++) {
    if (currYear - arr[i].year >= 3) {
      printf("\nName: %s", arr[i].name);
    }
  }
  
  return 0;
}