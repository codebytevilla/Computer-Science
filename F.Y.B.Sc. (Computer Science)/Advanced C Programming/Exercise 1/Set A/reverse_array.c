#include <stdio.h>

// Function to accept n numbers from the user
void accept_numbers(int arr[100], int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("Enter number %d: ", i + 1);
    scanf("%d", &arr[i]);
  }
}

// Function to display the array in reverse order
void display_numbers(int arr[100], int n)
{
  for (int i = n - 1; i >= 0; i--)
  {
    printf("%d ", arr[i]);
  }
}

int main()
{
  // Declare variables
  int n;
  int arr[100];

  // Get the number of elements from the user
  printf("Enter the number of elements: ");
  scanf("%d", &n);

  // Accept the numbers from the user
  accept_numbers(arr, n);

  // Display the numbers in reverse order
  display_numbers(arr, n);
}
