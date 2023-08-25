/*
 * This program calculates the final velocity and distance traveled by an object
 * given the initial velocity, acceleration, and time.
 *
 */

#include <stdio.h>

int main() {
  float u, a, t, v, s;

  printf("Enter the initial velocity: ");
  scanf("%f", &u);

  printf("Enter the acceleration: ");
  scanf("%f", &a);

  printf("Enter the time: ");
  scanf("%f", &t);

  v = u + a * t;
  s = u * t + 0.5 * a * t * t;

  printf("The final velocity is %.2f m/s\n", v);
  printf("The distance traveled is %.2f m\n", s);

}
