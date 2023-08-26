// This program accepts a character from the user and displays its ASCII value.

#include <stdio.h>

int main() {

  // Declare a character variable to store the user input.
  char ch;
  int ascii_value;

  // Prompt the user to enter a character.
  printf("Enter a character: ");
  scanf("%c", &ch);

  // Get the ASCII value of the user input.
  ascii_value = ch;

  // Display the ASCII value of the user input.
  printf("The ASCII value of '%c' is %d.\n", ch, ascii_value);

}
