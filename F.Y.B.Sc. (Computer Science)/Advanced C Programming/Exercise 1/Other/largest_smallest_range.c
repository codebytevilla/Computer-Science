// This program accepts n numbers in an array and displays the largest and smallest number, along with the range of elements in the array.

#include <stdio.h>

int main()
{
    // Declare variables.
    int arr[20];
    int n;
    int largest, smallest, range;
    int i;

    // Function declarations 
    void accept(int arr[], int n);
    void display(int arr[], int n);
    int maximum(int arr[], int n);
    int minimum(int arr[], int n);

    // Get the number of elements from the user.
    printf("How many numbers: ");
    scanf("%d", &n);

    // Accept the numbers from the user.
    accept(arr, n);

    // Display the numbers
    display(arr, n);

    // Find the largest number
    largest = maximum(arr, n);

    // Find the smallest number
    smallest = minimum(arr, n);

    // Calculate the range
    range = largest - smallest;

    // Display the results.
    printf("The largest number is: %d\n", largest);
    printf("The smallest number is: %d\n", smallest);
    printf("The range of the elements in the array is: %d\n", range);
}

// This function accepts the numbers from the user and stores them in the array.
void accept(int arr[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

// Function to display numbers
void display(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

// Function to find the largest number
int maximum(int arr[], int n)
{
    int i, max = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

// Function to find the smallest number 
int minimum(int arr[], int n)
{
    int i, min = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}
