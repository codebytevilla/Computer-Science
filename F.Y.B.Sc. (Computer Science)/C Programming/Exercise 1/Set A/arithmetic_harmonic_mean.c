/* This program accepts two numbers and prints their arithmetic and harmonic mean */
// Note H = 2ab/(a+b)

#include <stdio.h>

int main() {

  /* Declare variables */
  int a, b;
  float arithmetic_mean, harmonic_mean;

  /* Prompt user to enter two numbers */
  printf("Enter two numbers: ");
  scanf("%d %d", &a, &b);

  /* Calculate arithmetic mean */
  arithmetic_mean = (a + b) / 2.0;

  /* Calculate harmonic mean */
  harmonic_mean = 2.0 * a * b / (a + b);

  /* Print results */
  printf("Arithmetic mean = %.2f\n", arithmetic_mean);
  printf("Harmonic mean = %.2f\n", harmonic_mean);

}
