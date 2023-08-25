/*
 * This program calculates the sum of the first n terms of the series
 * 1/x + 2/x^2 + 3/x^3 ...
 *
 * The program takes two inputs:
 * - x: a real number
 * - n: an integer
 *
 * The program outputs the sum of the first n terms of the series.
 */

#include <stdio.h>

int main() {
  // Get the input from the user.
  double x;
  int n;
  printf("Enter x: ");
  scanf("%lf", &x);
  printf("Enter n: ");
  scanf("%d", &n);

  // Calculate the sum of the series.
  double sum = 0.0;
  for (int i = 1; i <= n; i++) {
    sum += i * 1.0 / pow(x, i);
  }

  // Print the output.
  printf("The sum of the first %d terms is %.2lf\n", n, sum);
  
}
