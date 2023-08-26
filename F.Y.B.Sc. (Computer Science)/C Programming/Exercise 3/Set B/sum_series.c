// This program calculates the sum of first n terms of the series x+ 3x+5x+7x+…
// The program takes two inputs: real number x and integer n
// The program outputs the sum of the first n terms of the series

#include <stdio.h>

int main() {

  // Declare variables
  double x;
  int n;
  double sum = 0;

  // Get input from user
  printf("Enter the value of x: ");
  scanf("%lf", &x);
  printf("Enter the number of terms: ");
  scanf("%d", &n);

  // Calculate the sum of the first n terms
  for (int i = 1; i <= n; i++) {
    sum += (2 * i - 1) * x;
  }

  // Print the sum
  printf("The sum of the first %d terms is %.2lf\n", n, sum);

}
