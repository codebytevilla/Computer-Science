/*
  This program calculates the roots of a quadratic equation.
 
  The equation is in the form of ax^2 + bx + c = 0, where a, b, and c are
  real numbers.
 
  The program considers all possible cases for the roots:
    - Two real roots
    - One repeated real root
    - Two complex roots
 */

#include <stdio.h>
#include <math.h>

int main() {
  // Initialize the coefficients of the quadratic equation.
  float a, b, c;
  a = 1;
  b = 2;
  c = 3;

  // Calculate the discriminant of the quadratic equation.
  float discriminant = b * b - 4 * a * c;

  // Check for all possible cases of the roots of the equation.
  if (discriminant > 0) {
    // Two real and distinct roots.
    float root1 = (-b + sqrt(discriminant)) / 2 * a;
    float root2 = (-b - sqrt(discriminant)) / 2 * a;
    printf("The roots of the equation are: %f and %f\n", root1, root2);
  } else if (discriminant == 0) {
    // One repeated real root.
    float root = -b / 2 * a;
    printf("The root of the equation is: %f\n", root);
  } else {
    // Two complex roots.
    float root1 = (-b + sqrt(-discriminant)) / 2 * a;
    float root2 = (-b - sqrt(-discriminant)) / 2 * a;
    printf("The roots of the equation are: %f + %fi and %f - %fi\n", root1, sqrt(-discriminant) / 2 * a, root2, sqrt(-discriminant) / 2 * a);
  }
}
