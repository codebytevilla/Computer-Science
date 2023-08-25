// This program checks whether a year is a leap year or not.

#include <stdio.h>

int main() {
  int year;

  printf("Enter a year: ");
  scanf("%d", &year);

  // A year is a leap year if it is divisible by 4 but not by 100, or if it is divisible by 400.

  if ((year % 4 == 0) && (year % 100 != 0)) {
    printf("The year %d is a leap year.\n", year);
  } else if (year % 400 == 0) {
    printf("The year %d is a leap year.\n", year);
  } else {
    printf("The year %d is not a leap year.\n", year);
  }
}
