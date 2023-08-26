/*
 * This program performs fraction operations on two fractions.
 * The user can choose from the following operations:
 * - Addition
 * - Subtraction
 * - Multiplication
 * - Exit
 */

#include <stdio.h>

int main()
{
    // Declare variables to store the numerator and denominator of the two fractions.
    int num1, den1, num2, den2;
    int choice;

    // Get the numerator and denominator of the first fraction from the user.
    printf("Enter the numerator of the first fraction: ");
    scanf("%d", &num1);
    printf("Enter the denominator of the first fraction: ");
    scanf("%d", &den1);

    // Get the numerator and denominator of the second fraction from the user.
    printf("Enter the numerator of the second fraction: ");
    scanf("%d", &num2);
    printf("Enter the denominator of the second fraction: ");
    scanf("%d", &den2);
    do
    {
        // Display a menu of options to the user.
        printf("\nSelect an operation:");
        printf("\n1. Addition");
        printf("\n2. Subtraction");
        printf("\n3. Multiplication");
        printf("\n4. Exit");

        // Get the user's selection from the menu.

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        // Perform the selected operation on the two fractions.
        switch (choice)
        {
        case 1:
            // Add the two fractions
            printf("\n(%d/%d) + (%d/%d) = %d/%d\n", num1, den1, num2, den2, num1 * den2 + num2 * den1, den1 * den2);
            break;
        case 2:
            // Subtract the two fractions
            printf("\n(%d/%d) - (%d/%d) = %d/%d\n", num1, den1, num2, den2, num1 * den2 - num2 * den1, den1 * den2);
            break;
        case 3:
            // Multiply the two fractions
            printf("\n(%d/%d) * (%d/%d) = %d/%d\n", num1, den1, num2, den2, num1 * num2, den1 * den2);
            break;
        case 4:
            printf("\nExiting...\n");
            return 0;
        default:
            printf("\nInvalid choice.\n");
        }
    } while (choice != 4);
}
