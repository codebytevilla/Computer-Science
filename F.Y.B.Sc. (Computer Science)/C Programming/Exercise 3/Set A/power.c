// This program computes xn, where x and n are two integers.

#include <stdio.h>

int main() {
  // Declare variables.
  int x, n;
  int result = 1;
  int i;

  // Read x and n from the user.
  printf("Enter two integers: ");
  scanf("%d %d", &x, &n);

  // Compute xn.
  for (i = 0; i < n; i++) {
    result *= x;
  }

  printf("x^n = %d\n", result);

}
