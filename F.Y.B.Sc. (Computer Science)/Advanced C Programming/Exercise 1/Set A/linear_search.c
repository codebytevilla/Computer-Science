// This program implements the linear search algorithm to find the position of a key in an array.

#include <stdio.h>

// Function to perform linear search
int linearSearch(int arr[], int n, int key)
{
    int i;

    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i; // Key found at index i
        }
    }
    return -1; // Key not found
}

int main()
{
    int n, i, key;
    int position;
    int arr[n];

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the key to be searched: ");
    scanf("%d", &key);

    position = linearSearch(arr, n, key);

    if (position != -1)
    {
        printf("Key found at position: %d\n", position);
    }
    else
    {
        printf("Key not found in the array.\n");
    }
}
