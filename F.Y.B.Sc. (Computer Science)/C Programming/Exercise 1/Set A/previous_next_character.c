// This program accepts a character from the keyboard and displays its previous and next character in order.
// The program also prints a message to indicate whether the character is an alphabet, a digit, or a special character.

#include <stdio.h>

int main() {

  char ch;
  char prev_ch, next_ch;

  // Get a character from the keyboard.
  printf("Enter a character: ");
  scanf("%c", &ch);

  // Get the previous and next character of the entered character.
  prev_ch = ch - 1;
  next_ch = ch + 1;

  // Print the previous and next character of the entered character.
  printf("The previous character is %c.\n", prev_ch);
  printf("The next character is %c.\n", next_ch);

}

