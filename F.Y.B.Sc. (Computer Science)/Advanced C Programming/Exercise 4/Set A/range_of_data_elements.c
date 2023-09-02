// This program allocates memory dynamically for n integers such that the memory is initialized to 0.
// It accepts the data from the user and finds the range of the data elements.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declare variables
    int n, i, *ptr, min, max;

    // Get the number of integers from the user
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    // Allocate memory dynamically for n integers
    ptr = (int *)malloc(n * sizeof(int));

    // Initialize the memory to 0
    for (i = 0; i < n; i++)
    {
        ptr[i] = 0;
    }

    // Get the data from the user
    for (i = 0; i < n; i++)
    {
        printf("Enter the %dth integer: ", i + 1);
        scanf("%d", &ptr[i]);
    }

    // Find the minimum and maximum values
    min = ptr[0];
    max = ptr[0];
    for (i = 1; i < n; i++)
    {
        if (ptr[i] < min)
        {
            min = ptr[i];
        }
        else if (ptr[i] > max)
        {
            max = ptr[i];
        }
    }

    // Print the range
    printf("The range of the data elements is %d.\n", max - min);

    // Free the memory
    free(ptr);

    return 0;
}
