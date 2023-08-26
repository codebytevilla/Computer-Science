// This program swaps two integers without using any function.
// The program prompts the user to enter two integers, and then
// swaps their values. The swapped integers are then displayed to the user.

#include <stdio.h>

int main() {
  int a, b;

  // Prompt the user to enter two integers.
  printf("Enter two integers: ");
  scanf("%d %d", &a, &b);

  // Swap the values of a and b.
  a = a + b;
  b = a - b;
  a = a - b;

  // Display the swapped integers.
  printf("The swapped integers are %d and %d.\n", a, b);

}
