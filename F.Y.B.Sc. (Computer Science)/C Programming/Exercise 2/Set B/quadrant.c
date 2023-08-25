/*
 * This program accepts the x and y coordinate of a point and finds the quadrant in which the point lies.
 *
 * The quadrants are numbered as follows:
 *
 *   1. First quadrant (x > 0, y > 0)
 *   2. Second quadrant (x < 0, y > 0)
 *   3. Third quadrant (x < 0, y < 0)
 *   4. Fourth quadrant (x > 0, y < 0)
 *
 * If the point lies at the origin (x = 0, y = 0), the program prints "The point lies at the origin."
 */

#include <stdio.h>

int main() {
  int x, y;

  printf("Enter the x-coordinate: ");
  scanf("%d", &x);

  printf("Enter the y-coordinate: ");
  scanf("%d", &y);

  if (x > 0 && y > 0) {
    printf("The point lies in the first quadrant.\n");
  } else if (x < 0 && y > 0) {
    printf("The point lies in the second quadrant.\n");
  } else if (x < 0 && y < 0) {
    printf("The point lies in the third quadrant.\n");
  } else if (x > 0 && y < 0) {
    printf("The point lies in the fourth quadrant.\n");
  } else {
    printf("The point lies at the origin.\n");
  }
}
