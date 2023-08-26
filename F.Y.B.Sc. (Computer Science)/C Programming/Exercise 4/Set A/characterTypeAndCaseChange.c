// This program accepts a character from the user and checks if it is
// an alphabet, digit or punctuation symbol. If it is an alphabet,
// check if it is uppercase or lowercase and then change the case.

#include <stdio.h>

int main() {
  char ch;

  printf("Enter a character: ");
  scanf("%c", &ch);

  // Check if the character is an alphabet.
  if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
    // Check if the character is uppercase.
    if (ch >= 'A' && ch <= 'Z') {
      ch += 32; // Convert to lowercase.
      printf("The character is an alphabet, converted to lowercase %c.\n", ch);
    } else {
      ch -= 32; // Convert to uppercase.
      printf("The character is an alphabet, converted to uppercase %c.\n", ch);
    }
  } else if (ch >= '0' && ch <= '9') {
    // The character is a digit.
    printf("The character is a digit %c.\n", ch);
  } else {
    // The character is a punctuation symbol.
    printf("The character is a punctuation symbol %c.\n", ch);
  }
}
