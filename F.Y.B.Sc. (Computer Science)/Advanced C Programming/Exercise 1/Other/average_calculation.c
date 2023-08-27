// This program accepts 'n' numbers in an array, calculates their average,
// and displays the average value.

#include <stdio.h>

// Function declarations 
void accept(int arr[20], int n);
void display(int arr[20], int n);
float calculate_average(int arr[20], int n);

int main()
{
    int arr[20];
    int n;
    float average;

    printf("How many numbers: ");
    scanf("%d", &n);

    accept(arr, n); // Call the accept function to input numbers
    display(arr, n); // Call the display function to show entered numbers

    average = calculate_average(arr, n);
    printf("The average is: %.2f", average);
}

// Function to accept 'n' numbers into an array
void accept(int arr[20], int n)
{
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

// Function to display the entered numbers in the array
void display(int arr[20], int n)
{
    printf("Entered numbers:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

// Function to calculate the average of the numbers in the array
float calculate_average(int arr[20], int n)
{
    int sum = 0;
    int i;

    for (i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return (float)sum / n;
}
