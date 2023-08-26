/*
 * This program accepts inner and outer radius of a ring and prints the perimeter and area of the ring.
 *
 * The formula for the perimeter of a ring is 2 * pi * (a + b), where a is the inner radius and b is the outer radius.
 * The formula for the area of a ring is pi * (a^2 - b^2), where a is the inner radius and b is the outer radius.
 */

#include <stdio.h>
#include <math.h>

int main() {
  // Declare variables
  float innerRadius, outerRadius, perimeter, area;

  // Prompt the user to enter the inner radius
  printf("Enter the inner radius of the ring: ");
  scanf("%f", &innerRadius);

  // Prompt the user to enter the outer radius
  printf("Enter the outer radius of the ring: ");
  scanf("%f", &outerRadius);

  // Calculate the perimeter
  perimeter = 2 * M_PI * (innerRadius + outerRadius);

  // Calculate the area
  area = M_PI * ((outerRadius * outerRadius) - (innerRadius * innerRadius));

  // Print the results
  printf("The perimeter of the ring is %.2f.\n", perimeter);
  printf("The area of the ring is %.2f.\n", area);

}
