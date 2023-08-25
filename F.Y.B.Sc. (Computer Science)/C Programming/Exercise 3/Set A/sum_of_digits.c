/*
 * This program accepts an integer, counts number of digits and calculates sum
 * of digits in the number.
 *
 * Example: Number = 1234
 * Output: Digits = 4, Sum = 10
 */

#include <stdio.h>

int main() {
  int n, digit, count = 0, sum = 0;

  printf("Enter an integer: ");
  scanf("%d", &n);

  while (n != 0) {
    digit = n % 10;
    sum += digit;
    count++;
    n /= 10;
  }

  printf("Number of digits: %d\n", count);
  printf("Sum of digits: %d\n", sum);

}
