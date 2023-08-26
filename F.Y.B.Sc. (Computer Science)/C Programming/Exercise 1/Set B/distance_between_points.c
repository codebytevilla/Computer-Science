// This program computes the distance between two points in the coordinate plane.
// The distance formula is used:
//
// distance = sqrt((x2 - x1)^2 + (y2 - y1)^2)

#include <stdio.h>
#include <math.h>

int main() {
  // Initialize variables.
  double x1, y1, x2, y2, distance;

  // Get the x and y coordinates of point 1 from the user.
  printf("Enter the x-coordinate of point 1: ");
  scanf("%lf", &x1);
  printf("Enter the y-coordinate of point 1: ");
  scanf("%lf", &y1);

  // Get the x and y coordinates of point 2 from the user.
  printf("Enter the x-coordinate of point 2: ");
  scanf("%lf", &x2);
  printf("Enter the y-coordinate of point 2: ");
  scanf("%lf", &y2);

  // Calculate the distance between the two points.
  distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

  // Print the distance.
  printf("The distance between the two points is %.2f.\n", distance);

}
