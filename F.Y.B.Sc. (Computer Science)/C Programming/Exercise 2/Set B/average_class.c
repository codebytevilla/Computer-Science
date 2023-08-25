/*
 * This program accepts marks for three subjects, calculates the average and displays the class obtained.
 *
 * The classes are:
 *   - Distinction (above 75%)
 *   - Class I (above 60%)
 *   - Class II (50% to 59%)
 *   - Pass class (40% to 49%)
 *   - Fail (otherwise)
 */

#include <stdio.h>

int main() {
  int subject1, subject2, subject3;
  float average;

  printf("Enter the marks for subject 1: ");
  scanf("%d", &subject1);

  printf("Enter the marks for subject 2: ");
  scanf("%d", &subject2);

  printf("Enter the marks for subject 3: ");
  scanf("%d", &subject3);

  average = (subject1 + subject2 + subject3) / 3.0;

  if (average >= 75) {
    printf("You have scored a distinction! Your average mark is %.2f.\n", average);
  } else if (average >= 60) {
    printf("You have scored a class I! Your average mark is %.2f.\n", average);
  } else if (average >= 50) {
    printf("You have scored a class II! Your average mark is %.2f.\n", average);
  } else if (average >= 40) {
    printf("You have passed! Your average mark is %.2f.\n", average);
  } else {
    printf("You have failed. Your average mark is %.2f.\n", average);
  }
}
