#include <stdio.h>

int main() {
  int day = 0;
  printf("Enter day: ");
  scanf("%d", &day);

  switch(day) {
    case 0:
      printf("Sunday\n");
      break;
    
    case 1:
      printf("Monday\n");
      break;
    
    case 2:
      printf("Tuesday\n");
      break;
    
    case 3:
      printf("Wednesday\n");
      break;
    
    case 4:
      printf("Thursday\n");
      break;
    
    case 5:
      printf("Friday\n");
      break;
    
    case 6:
      printf("Saturday\n");
      break;
    
    default:
      printf("Invalid day\n");
  }

  return 0;
}