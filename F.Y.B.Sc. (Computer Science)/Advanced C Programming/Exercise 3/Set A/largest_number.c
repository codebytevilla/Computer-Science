#include <stdio.h>

// Function to find and return a pointer to the largest element in an array
int* findLargest(int arr[], int size) {
    int *maxPtr;
    int i;

    if (size <= 0) {
        return NULL; // Handle empty arrays
    }

    maxPtr = &arr[0]; // Initialize maxPtr to the first element

    for (i = 1; i < size; i++) {
        if (arr[i] > *maxPtr) {
            maxPtr = &arr[i]; // Update maxPtr if a larger element is found
        }
    }

    return maxPtr;
}

int main() {
    int size, i;
    int arr[100];
    int *maxPtr;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    maxPtr = findLargest(arr, size);

    if (maxPtr != NULL) {
        printf("The largest element in the array is: %d\n", *maxPtr);
    } else {
        printf("The array is empty.\n");
    }
}
