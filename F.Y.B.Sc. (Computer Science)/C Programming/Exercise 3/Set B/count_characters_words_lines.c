// This program counts the number of characters, words, and lines entered by the user.
// The program uses a flag to count words. Delimiters like \n, \t, ;, ., and space are considered for counting words.

#include <stdio.h>

int main() {
  // Initialize the variables.
  int char_count = 0;
  int word_count = 0;
  int line_count = 0;
  int flag = 0;

  // Read characters from the user until the user enters *.
  char ch;
  while (ch != '*') {
    ch = getchar();

    // Increment the character count.
    char_count++;

    // If the character is a delimiter, set the flag to 0.
    if (ch == '\n' || ch == '\t' || ch == ';' || ch == '.' || ch == ' ') {
      flag = 0;
    } else if (flag == 0) {
      // If the flag is 0, it means that the previous character was not a delimiter.
      // In this case, increment the word count and set the flag to 1.
      word_count++;
      flag = 1;
    }

    // If the character is a newline, increment the line count.
    if (ch == '\n') {
      line_count++;
    }
  }

  // Print the results.
  printf("Number of characters: %d\n", char_count);
  printf("Number of words: %d\n", word_count);
  printf("Number of lines: %d\n", line_count);

}
