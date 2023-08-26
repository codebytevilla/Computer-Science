// This program performs operations on two numbers entered by the user
// using switch case statement

#include <stdio.h>

int main() {
  // Declare variables
  int x, y, choice, num;

  // Get two numbers from the user
  printf("Enter two numbers: ");
  scanf("%d %d", &x, &y);

  // Get the operation to be performed
  printf("Select an operation: \n");
  printf("1. Equality\n");
  printf("2. Less Than\n");
  printf("3. Quotient and Remainder\n");
  printf("4. Range\n");
  printf("5. Swap\n");
  scanf("%d", &choice);

  // Perform the operation
  switch (choice) {
    case 1:
      // Check if x is equal to y
      if (x == y) {
        printf("x is equal to y\n");
      } else {
        printf("x is not equal to y\n");
      }
      break;
    case 2:
      // Check if x is less than y
      if (x < y) {
        printf("x is less than y\n");
      } else {
        printf("x is not less than y\n");
      }
      break;
    case 3:
      // Divide x by y and display the quotient and remainder
      printf("The quotient is %d and the remainder is %d\n", x / y, x % y);
      break;
    case 4:
      // Accept a number and check if it lies between x and y (both inclusive)
      printf("Enter a number: ");
      scanf("%d", &num);
      if (num >= x && num <= y) {
        printf("The number %d lies between x and y\n", num);
      } else {
        printf("The number %d does not lie between x and y\n", num);
      }
      break;
    case 5:
      // Swap x and y
      int temp = x;
      x = y;
      y = temp;
      printf("x = %d and y = %d\n", x, y);
      break;
    default:
      // Invalid choice
      printf("Invalid choice\n");
      break;
  }
}
