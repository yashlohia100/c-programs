#include <stdio.h>

int main() {
  float principle, rate, time, si;

  printf("Enter principle, rate and time: ");
  scanf("%f%f%f", &principle, &rate, &time);

  si = (principle * rate * time) / 100;
  
  printf("Simple interest: %f", si);

  return 0;
}