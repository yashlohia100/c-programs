// Given a number N in the form of a string, the task is to check whether the given number is balanced or not.
// Balanced Number: A number is said to be balanced if the sum of digits in the first half of it is equal to the sum of the digits in the second half.
#include <stdio.h>
#include <string.h>

int balancedNum(char num[]) {
  int leftSum = 0;
  int rightSum = 0;

  int len = strlen(num);
  for (int i = 0; i < len / 2; i++) {
    leftSum += num[i] - '0';
    rightSum += num[len - 1 - i] - '0';
  }

  printf("Left sum %d\n", leftSum);
  printf("Right sum %d\n", rightSum);

  if (leftSum == rightSum) {
    return 1;
  }
  return 0;
}

int main() {
  if (balancedNum("1234060")) {
    printf("Balanced\n");
  } else {
    printf("Not Balanced\n");
  }

  return 0;
}