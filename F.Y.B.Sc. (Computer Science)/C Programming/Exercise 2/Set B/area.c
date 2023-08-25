// This program calculates the area of a square, rectangle, or triangle.
// The user selects the shape from a menu.

#include <stdio.h>

int main() {
  int choice;
  float length, breadth, height, area, base;

  // Display the menu.
  printf("1. Area of square\n");
  printf("2. Area of rectangle\n");
  printf("3. Area of triangle\n");
  printf("4. Exit\n");
  printf("Enter your choice: ");
  scanf("%d", &choice);

  // Switch on the user's choice.
  switch (choice) {
    case 1:
      printf("Enter the length of the square: ");
      scanf("%f", &length);
      area = length * length;
      printf("The area of the square is %.2f\n", area);
      break;
    case 2:
      printf("Enter the length and breadth of the rectangle: ");
      scanf("%f %f", &length, &breadth);
      area = length * breadth;
      printf("The area of the rectangle is %.2f\n", area);
      break;
    case 3:
      printf("Enter the base and height of the triangle: ");
      scanf("%f %f", &base, &height);
      area = (base * height) / 2;
      printf("The area of the triangle is %.2f\n", area);
      break;
    case 4:
      break;
    default:
      printf("Invalid choice.\n");
  }
}
