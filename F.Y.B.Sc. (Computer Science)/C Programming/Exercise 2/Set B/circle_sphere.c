/*
 * This program accepts radius from the user and prints the area,
 * circumference, and volume of a circle and sphere.
 *
 * The program uses a switch statement to determine the user's choice
 * from the menu.
 */

#include <stdio.h>

int main() {
  float radius, area, circumference, volume;
  int choice;

  // Get the radius from the user.
  printf("Enter the radius of the circle: ");
  scanf("%f", &radius);

  // Print the menu.
  printf("\n\n1. Area of Circle\n");
  printf("2. Circumference of Circle\n");
  printf("3. Volume of Sphere\n");
  printf("\nEnter your choice: ");
  scanf("%d", &choice);

  // Switch statement to determine the user's choice.
  switch (choice) {
    case 1:
      // Compute and print the area of the circle.
      area = 3.14159 * radius * radius;
      printf("\nThe area of the circle is %.2f\n", area);
      break;
    case 2:
      // Compute and print the circumference of the circle.
      circumference = 2 * 3.14159 * radius;
      printf("\nThe circumference of the circle is %.2f\n", circumference);
      break;
    case 3:
      // Compute and print the volume of the sphere.
      volume = (4.0 / 3.0) * 3.14159 * radius * radius * radius;
      printf("\nThe volume of the sphere is %.2f\n", volume);
      break;
    default:
      printf("\nInvalid choice.\n");
      break;
  }
}
