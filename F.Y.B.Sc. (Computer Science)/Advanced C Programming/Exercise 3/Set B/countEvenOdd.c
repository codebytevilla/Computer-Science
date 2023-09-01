// This program takes an array of integers as input,
// counts the number of even and odd values, and displays the counts in the main function.

#include <stdio.h>

// Function to count even and odd numbers
void countEvenOdd(int *arr, int n, int *evenCount, int *oddCount)
{
    int i;
    *evenCount = 0; // Initialize even count
    *oddCount = 0;  // Initialize odd count

    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            (*evenCount)++; // Increment even count if the number is even
        }
        else
        {
            (*oddCount)++; // Increment odd count if the number is odd
        }
    }
}

int main()
{
    int n, i;
    int arr[100];
    int evenCount, oddCount;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d integers in the array:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Call the function to count even and odd numbers
    countEvenOdd(arr, n, &evenCount, &oddCount);

    // Display the counts
    printf("Count of even numbers: %d\n", evenCount);
    printf("Count of odd numbers: %d\n", oddCount);

}
