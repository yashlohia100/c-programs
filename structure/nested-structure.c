#include <stdio.h>

struct Book {
  char name[10];
  int page;
  float price;
};

struct Employee {
  char name[10];
  int id;
  struct Book b1;
};

int main() {
  // struct Employee e1 = {"XYZ", 101, "DSA", 200, 500.50};
  struct Employee e1 = {"XYZ", 101, {"DSA", 200, 500.50}};
  printf("%s, %d, %s, %d, %f\n", e1.name, e1.id, e1.b1.name, e1.b1.page, e1.b1.price);

  return 0;
}