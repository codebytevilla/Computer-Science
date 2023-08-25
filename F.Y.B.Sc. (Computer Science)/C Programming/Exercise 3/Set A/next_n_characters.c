// This program accepts a character and an integer n, and displays the next n characters.

#include <stdio.h>

int main() {
  // Declare variables.
  char ch;
  int n;
  int i;

  // Get user input.
  printf("Enter a character: ");
  scanf("%c", &ch);
  printf("Enter an integer: ");
  scanf("%d", &n);

  // Print the next n characters.
  for (i = 0; i < n; i++) {
    printf("%c", ch + i);
  }
}
