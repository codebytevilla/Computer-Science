#include <stdio.h>

// Function to find the intersection of two integer arrays
int findIntersection(int arr1[], int arr2[], int n1, int n2, int result[])
{
    int i, j, k;
    k = 0;

    // Traverse both arrays
    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            // If an element of arr1 is equal to an element of arr2,
            // it's in the intersection
            if (arr1[i] == arr2[j])
            {
                result[k++] = arr1[i];
                break; // Break the inner loop, as we've found the intersection for this element
            }
        }
    }

    return k; // Return the size of the result array
}

int main()
{
    int i;
    int n1, n2;
    int arr1[100];
    int arr2[100];
    int result[100];
    int resultSize;

    // Get the size of the first array from the user
    printf("Enter the size of the first array: ");
    scanf("%d", &n1);

    // Input elements for the first array
    printf("Enter %d elements for the first array:\n", n1);
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    // Get the size of the second array from the user
    printf("Enter the size of the second array: ");
    scanf("%d", &n2);

    // Input elements for the second array
    printf("Enter %d elements for the second array:\n", n2);
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    // Find the intersection of arr1 and arr2
    resultSize = findIntersection(arr1, arr2, n1, n2, result);

    // Display the intersection
    printf("Intersection of the two arrays: ");
    for (i = 0; i < resultSize; i++)
    {
        printf("%d ", result[i]);
    }
    printf("\n");
}
