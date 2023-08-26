// This program displays all prime numbers between two given numbers.

#include <stdio.h>

int main() {
  // Get the lower and upper limits from the user.
  int lower_limit, upper_limit;
  printf("Enter the lower limit: ");
  scanf("%d", &lower_limit);
  printf("Enter the upper limit: ");
  scanf("%d", &upper_limit);

  // Iterate through all numbers from lower_limit to upper_limit.
  for (int i = lower_limit; i <= upper_limit; i++) {
    // Check if i is a prime number.
    int is_prime = 1;
    for (int j = 2; j * j <= i; j++) {
      if (i % j == 0) {
        is_prime = 0;
        break;
      }
    }

    // If i is a prime number, print it.
    if (is_prime) {
      printf("%d ", i);
    }
  }
}
