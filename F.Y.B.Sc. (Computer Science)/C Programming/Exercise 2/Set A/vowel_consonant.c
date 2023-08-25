// This program accepts a character from the user and checks whether the character is a vowel or consonant.
// The program does not use any functions.

#include <stdio.h>

int main() {

  // Declare a variable to store the character entered by the user.
  char ch;

  // Prompt the user to enter a character.
  printf("Enter a character: ");
  scanf(" %c", &ch);

  // Check whether the character is a vowel.
  if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
    printf("The character is a vowel.\n");
  } else {
    printf("The character is a consonant.\n");
  }
}
