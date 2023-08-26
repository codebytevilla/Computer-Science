/*
 * This program calculates the sum of all integers between two integers,
 * x and y, both inclusive.
 */

#include <stdio.h>

int main() {
  int x, y, i, sum;

  // Get the two integers from the user. 
  printf("Enter two integers: ");
  scanf("%d %d", &x, &y);

  // Initialize the sum variable. 
  sum = 0;

  // Iterate through all integers between x and y, inclusive. 
  for (i = x; i <= y; i++) {
    // Add the current integer to the sum. 
    sum += i;
  }

  printf("The sum of all integers between %d and %d is %d.\n", x, y, sum);

}
