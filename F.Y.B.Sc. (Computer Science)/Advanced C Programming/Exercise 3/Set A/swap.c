#include <stdio.h>

// Function to swap the values of two integers using pointers.
void swap(int *a, int *b) {
    int temp = *a; // Store the value pointed to by 'a' in a temporary variable.
    *a = *b;       // Assign the value pointed to by 'b' to 'a'.
    *b = temp;     // Assign the temporary value to 'b'.
}

int main() {
    int x, y; // Declare variables to store user-input numbers.

    // Prompt the user to enter two numbers.
    printf("Enter the first number: ");
    scanf("%d", &x);

    printf("Enter the second number: ");
    scanf("%d", &y);

    printf("Before swapping: x = %d, y = %d\n", x, y);

    // Call the swap function to exchange the values of x and y.
    swap(&x, &y);

    printf("After swapping: x = %d, y = %d\n", x, y);

}
