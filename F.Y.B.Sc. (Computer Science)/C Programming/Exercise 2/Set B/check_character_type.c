// This program checks whether given character is a digit or a character in lowercase or uppercase alphabet.
// The ASCII value of digit is between 48 to 57 and Lowercase characters have ASCII values in the range of 97 to122, uppercase is between 65 and 90.

#include <stdio.h>

int main() {
  char ch;

  printf("Enter a character: ");
  scanf("%c", &ch);

  if (ch >= 48 && ch <= 57) {
    printf("The character is a digit.");
  } else if (ch >= 97 && ch <= 122) {
    printf("The character is a lowercase alphabet.");
  } else if (ch >= 65 && ch <= 90) {
    printf("The character is an uppercase alphabet.");
  } else {
    printf("The character is not a digit, lowercase or uppercase alphabet.");
  }
}
