// This program accepts a number and checks if it is divisible by 5 and 7.

#include <stdio.h>

int main() {
  int number;

  printf("Enter a number: ");
  scanf("%d", &number);

  if (number % 5 == 0 && number % 7 == 0) {
    printf("The number is divisible by 5 and 7.\n");
  } else {
    printf("The number is not divisible by 5 and 7.\n");
  }
}
