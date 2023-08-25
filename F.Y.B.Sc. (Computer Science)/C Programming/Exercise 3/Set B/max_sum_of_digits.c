/*
This program accepts 'n' numbers from the user and displays the number with the maximum sum of its digits.
Note: This program assumes that all input numbers are non-negative.
*/

#include <stdio.h>

int main()
{
    int n;
    int i;
    int num, tempNum;
    int maxNumber = -1; // Initialize to a negative value to ensure any valid non-negative number is greater
    int maxSum = -1;    // Initialize to a negative value to ensure any valid non-negative sum is greater
    int currentSum;
    int sum;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {

        printf("Enter number %d: ", i + 1);
        scanf("%d", &num);

        sum = 0;
        tempNum = num;
        // Calculate the sum of digits of the current number
        while (tempNum > 0)
        {
            sum += tempNum % 10; // Add the last digit to the sum
            tempNum /= 10; // Remove the last digit from the number
        }

        currentSum = sum;
        // Compare the current sum with the maximum sum found so far
        if (currentSum > maxSum)
        {
            maxSum = currentSum;
            maxNumber = num; // Update the number with the maximum sum
        }
    }

    // Display the result
    if (maxNumber != -1)
    {
        printf("Number with maximum sum of digits: %d\n", maxNumber);
    }
    else
    {
        printf("No valid numbers provided.\n");
    }
}
