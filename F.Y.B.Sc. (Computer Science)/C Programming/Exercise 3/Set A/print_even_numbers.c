// This program accepts an integer n and displays all even numbers upto n.
// The program does not use any functions.

#include <stdio.h>

int main() {
  // Declare variables.
  int n, i;

  // Get the input from the user.
  printf("Enter an integer: ");
  scanf("%d", &n);

  // Print all even numbers upto n.
  for (i = 2; i <= n; i += 2) {
    printf("%d ", i);
  }

  // Return 0 to indicate successful completion of the program.
  return 0;
}
