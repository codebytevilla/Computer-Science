/*
 * This program calculates the surface area and volume of a cuboid.
 */

#include <stdio.h>

int main() {
  // Get the dimensions of the cuboid.
  float l, b, h;
  printf("Enter the length, breadth and height of the cuboid: ");
  scanf("%f %f %f", &l, &b, &h);

  // Calculate the surface area and volume of the cuboid.
  float surface_area = 2 * (l * b + l * h + b * h);
  float volume = l * b * h;

  // Print the results.
  printf("Surface area of the cuboid: %.2f sq units\n", surface_area);
  printf("Volume of the cuboid: %.2f cu units\n", volume);

}
