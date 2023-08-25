// This program checks if an integer is even or odd.
// The program takes an integer as input from the user and
// then prints "even" if the number is even, or "odd" if the number is odd.

#include <stdio.h>

int main() {
  // Get the integer from the user.
  int number;
  printf("Enter an integer: ");
  scanf("%d", &number);

  // Check if the number is even.
  if (number % 2 == 0) {
    printf("The number is even.\n");
  } else {
    printf("The number is odd.\n");
  }

}
