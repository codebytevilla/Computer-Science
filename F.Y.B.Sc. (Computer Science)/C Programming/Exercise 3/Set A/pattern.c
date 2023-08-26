// This program accepts an integer 'n' as input and displays a pattern of letters in the specified format.
//
// A B C D
// E F G
// H I
// J

#include <stdio.h>

int main() {
    int n;

    // Get the number of rows from the user.
    printf("Enter the value of n: ");
    scanf("%d", &n);

    char current_char = 'A'; // Initialize the starting character

    // Loop to iterate through each row
    for (int i = n; i > 0; i--) {
        // Loop to print characters in the current row
        for (int j = 0; j < i; j++) {
            printf("%c ", current_char); // Print the current character
            current_char++; // Move to the next character
        }
        printf("\n"); // Move to the next line after each row
    }
}
