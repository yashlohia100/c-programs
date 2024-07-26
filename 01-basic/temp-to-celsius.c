#include <stdio.h>

int main() {
  float celsius = 0;
  printf("Enter temprature in celsius: ");
  scanf("%f", &celsius);

  float fahrenheit = 0;
  fahrenheit = (celsius * 9 / 5) + 32;

  printf("Temprature in fahrenheit: %f", fahrenheit);
  return 0;
}