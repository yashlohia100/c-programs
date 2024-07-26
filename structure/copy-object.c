#include <stdio.h>
#include <string.h>

struct Book {
  char name[10];
  int page;
  float price;
};

int main() {
  struct Book b1 = {"DSA", 200, 500.50};
  struct Book b2, b3;

  // copy piece-meal
  strcpy(b2.name, b1.name);
  b2.page = b1.page;
  b2.price = b1.price;

  // copy direct
  b3 = b1;

  printf("%s %d %f\n", b1.name, b1.page, b1.price);
  printf("%s %d %f\n", b2.name, b2.page, b2.price);
  printf("%s %d %f\n", b3.name, b3.page, b3.price);
  return 0;
}