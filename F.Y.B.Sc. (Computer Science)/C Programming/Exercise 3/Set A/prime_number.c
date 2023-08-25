// This program checks if an integer is prime or not.
// The program takes an integer as input and prints "prime" if the number is prime,
// otherwise it prints "not prime".

#include <stdio.h>

int main() {
  int n;
  int i;
  int flag = 1;

  printf("Enter an integer: ");
  scanf("%d", &n);

  // Check if the number is less than 2.
  if (n < 2) {
    flag = 0;
  }

  // Check if the number is divisible by any number between 2 and n/2.
  for (i = 2; i <= n / 2; i++) {
    if (n % i == 0) {
      flag = 0;
      break;
    }
  }

  // If the flag is still 1, then the number is prime.
  if (flag) {
    printf("%d is prime.\n", n);
  } else {
    printf("%d is not prime.\n", n);
  }
}
