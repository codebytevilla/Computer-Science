// This program checks whether a character is a digit.
// The program takes a character as input and checks if it is in the range '0' to '9', both inclusive.

#include <stdio.h>

int main() {

  // Define a variable to store the input character.
  char ch;

  // Get the input character from the user.
  printf("Enter a character: ");
  scanf("%c", &ch);

  // Check if the character is a digit.
  if (ch >= '0' && ch <= '9') {
    printf("The character is a digit.\n");
  } else {
    printf("The character is not a digit.\n");
  }
}
