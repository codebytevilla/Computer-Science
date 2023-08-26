/*
 * This program calculates and prints the final velocity and distance travelled by an object
 * given its initial velocity, acceleration and time.
 */

#include <stdio.h>

int main() {
  // Initialize the variables.
  float u, a, t, v, s;

  // Get the initial velocity, acceleration and time from the user.
  printf("Enter the initial velocity: ");
  scanf("%f", &u);
  printf("Enter the acceleration: ");
  scanf("%f", &a);
  printf("Enter the time: ");
  scanf("%f", &t);

  // Calculate the final velocity and distance travelled.
  v = u + a * t;
  s = u * t + 0.5 * a * t * t;

  // Print the final velocity and distance travelled.
  printf("The final velocity is %.2f m/s.\n", v);
  printf("The distance travelled is %.2f m.\n", s);
  
}
