/*
 * This program accepts three numbers and checks whether the first is between the other two numbers.
 *
 * The program first prompts the user to enter the three numbers.
 * Then, the program checks if the first number is greater than or equal to the second number and less than or equal to the third number.
 * If the first number is between the other two numbers, the program prints a message to that effect.
 * Otherwise, the program prints a message to say that the first number is not between the other two numbers.
 */

#include <stdio.h>

int main() {
  // Declare variables to store the three numbers
  int first_number, second_number, third_number;

  // Prompt the user to enter the three numbers
  printf("Enter three numbers: ");
  scanf("%d %d %d", &first_number, &second_number, &third_number);

  // Check if the first number is between the other two numbers
  if (first_number >= second_number && first_number <= third_number) {
    printf("The first number is between the other two numbers.\n");
  } else {
    printf("The first number is not between the other two numbers.\n");
  }
}
