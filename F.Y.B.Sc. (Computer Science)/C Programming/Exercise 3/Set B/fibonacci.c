// This program displays the first n Fibonacci numbers.
 
#include <stdio.h>

int main() {
  int n, i, first_number, second_number, next_number;

  // Prompt the user to enter the number of Fibonacci numbers to display.
  printf("How many Fibonacci numbers do you want to display? ");
  scanf("%d", &n);

  // Initialize the first two numbers in the Fibonacci sequence.
  first_number = 1;
  second_number = 1;

  // Print the first two Fibonacci numbers.
  printf("%d %d ", first_number, second_number);

  // Iterate through the Fibonacci sequence, printing each number to the console.
  for (i = 2; i < n; i++) {
    next_number = first_number + second_number;
    printf("%d ", next_number);

    // Update the first and second numbers for the next iteration.
    first_number = second_number;
    second_number = next_number;
  }

  // Print a newline character to end the output.
  printf("\n");

}
