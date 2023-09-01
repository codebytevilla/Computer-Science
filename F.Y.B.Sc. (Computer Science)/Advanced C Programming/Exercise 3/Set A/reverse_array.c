#include <stdio.h>

// Function to display elements of an array in reverse order
void displayReverse(int arr[], int n) {
    int i;
    int *ptr = &arr[n - 1]; // Initialize a pointer to the last element of the array

    printf("Elements of the array in reverse order:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", *ptr); // Print the element pointed to by the pointer
        ptr--; // Move the pointer to the previous element
    }
    printf("\n");
}

int main() {
    int n, i;
    int arr[100]; // Declare an array of size n

    // Prompt the user for the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input the elements of the array
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Call the function to display the elements in reverse order
    displayReverse(arr, n);
}
