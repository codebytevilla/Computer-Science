// This program calculates the sum of digits of a number using recursion.
#include <stdio.h>

// A recursive function to calculate the sum of digits of a number
int sum_of_digits(int n) {
  /* Base case: If the number is 0, the sum is 0. */
  if (n == 0) {
    return 0;
  }

  /* Recursive case: The sum is the current digit plus the sum of the remaining digits. */
  return (n % 10) + sum_of_digits(n / 10);
}

int main() {
  // Get the number from the user
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);

  // Print the sum of the digits of the number
  printf("The sum of the digits of %d is %d\n", n, sum_of_digits(n));

}
