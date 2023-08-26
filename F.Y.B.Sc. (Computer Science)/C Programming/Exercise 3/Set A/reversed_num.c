/*
 * This program accepts an integer and reverses the number.
 *
 * Example: Input: 546, Reverse = 645
 */

#include <stdio.h>

int main() {
  int num, reversedNum = 0, digit;

  printf("Enter an integer: ");
  scanf("%d", &num);

  while (num > 0) {
    digit = num % 10;
    reversedNum = reversedNum * 10 + digit;
    num = num / 10;
  }

  printf("The reversed number is: %d\n", reversedNum);
}
