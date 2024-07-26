#include <stdio.h>

int isLeap(int year) {
  if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
    return 1;
  }
  return 0;
}

// Calculate days upto but not including input data
int getDays(int day, int month, int year) {
  // Base year: 01-01-2000
  long int numDays = 0;

  // Skip passed years
  for (int yr = 2000; yr < year; yr++) {
    if (isLeap(yr)) {
      numDays += 366;
    } else {
      numDays += 365;
    }
  }

  // Skip passed months
  for (int mon = 1; mon < month; mon++) {
    if (mon == 1 || mon == 3 || mon == 5 || mon == 7 || mon == 8 || mon == 10 || mon == 12) {
      numDays += 31;
    } else if (mon == 2) {
      if (isLeap(year)) {
        numDays += 29;
      } else {
        numDays += 28;
      }
    } else {
      numDays += 30;
    }
  }

  // Add remaining days (excluding last day)
  numDays += day - 1;

  return numDays;
}

void printDayName(int day) {
  if (day == 0) {
    printf("Saturday\n");
  } else if (day == 1) {
    printf("Sunday\n");
  } else if (day == 2) {
    printf("Monday\n");
  } else if (day == 3) {
    printf("Tuesday\n");
  } else if (day == 4) {
    printf("Wednesday\n");
  } else if (day == 5) {
    printf("Thursday\n");
  } else if (day == 6) {
    printf("Friday\n");
  }
}

int main() {
  int numDays = getDays(15, 10, 2024);
  // int numDays = getDays(4, 01, 2000);
  int dayNum = numDays % 7;

  printf("\n%d ", numDays);
  printf("\n%d ", dayNum);
  printf("\n");
  printDayName(dayNum);
  return 0;
}