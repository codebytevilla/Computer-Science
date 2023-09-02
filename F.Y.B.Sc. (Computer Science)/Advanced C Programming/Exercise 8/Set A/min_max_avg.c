// This program accepts three integers as command line arguments and finds the minimum, maximum, and average of the three.
// If an invalid number of arguments is entered, it displays an error message.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int num1, num2, num3;
    int min, max;
    double average;

    // Check if the user provided the correct number of arguments
    if (argc != 4)
    {
        printf("Error: Invalid number of arguments. Please provide three integers.\n");
        return 1; // Exit with an error code
    }

    // Parse command line arguments to integers
    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);
    num3 = atoi(argv[3]);

    // Find the minimum
    min = num1;
    if (num2 < min)
    {
        min = num2;
    }
    if (num3 < min)
    {
        min = num3;
    }

    // Find the maximum
    max = num1;
    if (num2 > max)
    {
        max = num2;
    }
    if (num3 > max)
    {
        max = num3;
    }

    // Calculate the average
    average = (num1 + num2 + num3) / 3.0;

    // Display the results
    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);
    printf("Average: %.2lf\n", average);

    return 0; // Exit with success
}
