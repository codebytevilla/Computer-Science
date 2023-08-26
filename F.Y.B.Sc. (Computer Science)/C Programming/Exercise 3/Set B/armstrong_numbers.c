/*
 * This program prints all Armstrong numbers between 1 and 500.
 * An Armstrong number is a number such that the sum of cubes of its digits is equal to the number itself.
 * For example, 153 is an Armstrong number because 1^3 + 5^3 + 3^3 = 153.
 */

#include <stdio.h>

int main() {
  int number, temp, digit, sum, n;

  for (number = 1; number <= 500; number++) {
    // Count the number of digits in the number
    temp = number;
    n = 0;
    while (temp > 0) {
      temp /= 10;
      n++;
    }

    // Calculate the sum of cubes of the digits
    sum = 0;
    for (temp = number; temp > 0; temp /= 10) {
      digit = temp % 10;
      sum += digit * digit * digit;
    }

    // Check if the sum is equal to the number
    if (sum == number) {
      printf("%d is an Armstrong number\n", number);
    }
  }
}
