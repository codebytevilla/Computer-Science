// This program accepts n numbers from the user and checks if they are even or odd.

#include <stdio.h>

int isEven(int number) {
  // Check if the number is divisible by 2.
  if (number % 2 == 0) {
    return 1;
  } else {
    return 0;
  }
}

int main()
{
    int n, number;

    // Get the number of numbers from the user.
    printf("Enter the number of numbers: ");
    scanf("%d", &n);

    // Iterate through the numbers and check if they are even or odd.
    for (int i = 0; i < n; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &number);

        if (isEven(number))
        {
            printf("Number %d is even.\n", i + 1);
        }
        else
        {
            printf("Number %d is odd.\n", i + 1);
        }
    }
}
