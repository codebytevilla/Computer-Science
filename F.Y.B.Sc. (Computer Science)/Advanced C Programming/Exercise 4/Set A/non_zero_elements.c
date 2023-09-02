// This program accepts n integers in an array, copies only the non-zero elements
// to another array, calculates the sum and average of non-zero elements.


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;                   // number of elements in the array
    int *arr, *non_zero_arr; // pointers to the arrays
    int i, count, sum;
    float avg;

    // Get the number of elements from the user
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Allocate memory for the arrays
    arr = (int *)malloc(n * sizeof(int));
    non_zero_arr = (int *)malloc(n * sizeof(int));

    // Initialize the counters
    count = 0;
    sum = 0;

    // Read the elements from the user
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Iterate through the array and copy only the non-zero elements to the
    // non-zero_arr array
    for (i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            non_zero_arr[count++] = arr[i];
        }
    }

    // Calculate the sum and average of the non-zero elements
    for (i = 0; i < count; i++)
    {
        sum += non_zero_arr[i];
    }
    avg = sum / count;

    // Print the results
    printf("The number of non-zero elements is %d\n", count);
    printf("The sum of non-zero elements is %d\n", sum);
    printf("The average of non-zero elements is %.2f\n", avg);

    // Free the allocated memory
    free(arr);
    free(non_zero_arr);

    return 0;
}
