#include <stdio.h>

struct Cricketer {
  char name[20];
  int age;
  int matches;
  float runs;
} arr[3];


int main() {
  
  // Cricketer arr[3];
  int n = 3;
  for (int i = 0; i < n; i++) {
    printf("\nEnter name: ");
    scanf("%s", arr[i].name);

    printf("Enter age: ");
    scanf("%d", &arr[i].age);

    printf("Enter matches: ");
    scanf("%d", &arr[i].matches);

    printf("Enter runs: ");
    scanf("%f", &arr[i].runs);
    //scanf("%c");
  }

  for (int i = 0; i < n; i++) {
    printf("\nName: %s", arr[i].name);
    printf("\nAge: %d", arr[i].age);
    printf("\nMatches: %d", arr[i].matches);
    printf("\nRuns: %f", arr[i].runs);
    printf("\n");
  }

  return 0;
}