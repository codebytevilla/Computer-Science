#include <stdio.h>

// Define a MAX macro to find the maximum of two numbers.
#define MAX(x, y) ((x) > (y) ? (x) : (y))

int main()
{
    int n, i;
    int max, num;

    // Prompt the user to enter the number of elements.
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1; // Exit with an error code.
    }

    // Initialize max with the first number.
    printf("Enter number 1: ");
    scanf("%d", &max);

    for (i = 2; i <= n; i++)
    {
        // Prompt the user to enter the next number.
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        // Use the MAX macro to update max with the maximum of max and num.
        max = MAX(max, num);
    }

    // Print the maximum value.
    printf("The maximum number is: %d\n", max);

    return 0;
}
