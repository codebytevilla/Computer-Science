#include <stdio.h>
#include <math.h>

int main() {
  // declare variables
  float radius, height, surface_area, volume;

  // prompt user to enter radius and height
  printf("Enter radius of cylinder: ");
  scanf("%f", &radius);
  printf("Enter height of cylinder: ");
  scanf("%f", &height);

  // calculate surface area and volume
  surface_area = 2 * M_PI * radius * (radius + height);
  volume = M_PI * radius * radius * height;

  // print surface area and volume
  printf("Surface area of cylinder = %.2f\n", surface_area);
  printf("Volume of cylinder = %.2f\n", volume);

}
