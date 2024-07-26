#include <stdio.h>
#include <string.h>

struct Book {
  char name[20];
  int pages;
  float price;
} b1;

int main() {
  // printf("Enter name: ");
  // scanf("%s", b1.name);

  // printf("Enter pages: ");
  // scanf("%d", &b1.pages);

  // printf("Enter price: ");
  // scanf("%f", &b1.price);

  strcpy(b1.name, "abcd");
  b1.pages = 12;
  b1.price = 100.34;

  printf("\nName: %s\n", b1.name);
  printf("Pages: %d\n", b1.pages);
  printf("Price: %f\n", b1.price);

  printf("%d %d %d\n", sizeof(b1.name), sizeof(b1.pages), sizeof(b1.price));

  printf("Size: %d", sizeof(b1));
  
  return 0;
}