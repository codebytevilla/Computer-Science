#include <stdio.h>

// Function to perform Bubble Sort on an array
void bubbleSort(int arr[], int n)
{
    int i, j;
    int temp;
    int swapped;

    // Repeat the process n-1 times
    for (i = 0; i < n - 1; i++)
    {
        swapped = 0; // Flag to check if any swapping is done in this pass

        // Compare and swap adjacent elements if they are in the wrong order
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // Swap arr[j] and arr[j + 1]
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1; // Set the swapped flag to true
            }
        }

        // If no two elements were swapped in this pass, the array is already sorted
        if (swapped == 0)
        {
            break;
        }
    }
}

int main()
{
    int n, i;
    int arr[100];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Call the Bubble Sort function to sort the array
    bubbleSort(arr, n);

    printf("Sorted array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
