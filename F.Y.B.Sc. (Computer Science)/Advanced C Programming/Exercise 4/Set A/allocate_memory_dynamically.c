// This program allocates memory dynamically for n integers such that the allocated memory is initialized to 0 and accepts and displays the values.

#include <stdio.h>
#include <stdlib.h>

void accept_values(int *ptr, int n)
{
    int i;

    // Initialize the memory to 0
    for (i = 0; i < n; i++)
    {
        ptr[i] = 0;
    }

    // Accept the values from the user
    for (i = 0; i < n; i++)
    {
        printf("Enter the value of integer %d: ", i + 1);
        scanf("%d", &ptr[i]);
    }
}

void display_values(int *ptr, int n)
{
    int i;

    // Display the values
    printf("The values are: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]);
    }
}

int main()
{
    // Declare variables
    int n;
    int *ptr;

    // Get the number of integers from the user
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    // Allocate memory dynamically for n integers
    ptr = (int *)calloc(n, sizeof(int));
    if (ptr == NULL)
    {
        printf("Error allocating memory.");
        exit(1);
    }

    // Call the accept_values function
    accept_values(ptr, n);

    // Call the display_values function
    display_values(ptr, n);

    // Free the memory
    free(ptr);

    return 0;
}
