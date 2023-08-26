/*
 * This function accepts a character and an integer as input and displays the next n characters.
 */

#include <stdio.h>

void next_n_chars(char c, int n) {
  // Iterate over the next n characters, starting from c.
  for (int i = 0; i < n; i++) {
    // Print the character.
    printf("%c ", c + i);
  }
}

int main() {
  // Get the character and number of characters from the user.
  char c;
  int n;
  printf("Enter a character: ");
  scanf("%c", &c);
  printf("Enter the number of characters: ");
  scanf("%d", &n);

  // Display the next n characters.
  next_n_chars(c, n);

}
