#include <stdio.h>
#include <stdlib.h>

// Structure to represent a Fraction
struct Fraction
{
    int numerator;
    int denominator;
};

// Function to find the greatest common divisor (GCD) using Euclidean algorithm
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to reduce a fraction to its simplest form
void reduceFraction(struct Fraction *fraction)
{
    int commonDivisor;
    commonDivisor = gcd(fraction->numerator, fraction->denominator);
    fraction->numerator /= commonDivisor;
    fraction->denominator /= commonDivisor;
}

// Function to display a fraction
void displayFraction(const struct Fraction *fraction)
{
    printf("%d/%d", fraction->numerator, fraction->denominator);
}

// Function to find the largest fraction
struct Fraction findLargestFraction(const struct Fraction *fractions, int n)
{
    int i;
    struct Fraction largest = fractions[0];

    for (i = 1; i < n; i++)
    {
        if ((double)fractions[i].numerator / fractions[i].denominator >
            (double)largest.numerator / largest.denominator)
        {
            largest = fractions[i];
        }
    }

    return largest;
}

// Function to find the smallest fraction
struct Fraction findSmallestFraction(const struct Fraction *fractions, int n)
{
    int i;
    struct Fraction smallest = fractions[0];

    for (i = 1; i < n; i++)
    {
        if ((double)fractions[i].numerator / fractions[i].denominator <
            (double)smallest.numerator / smallest.denominator)
        {
            smallest = fractions[i];
        }
    }

    return smallest;
}

// Function to sort fractions in ascending order
void sortFractions(struct Fraction *fractions, int n)
{
    int i, j;
    struct Fraction temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if ((double)fractions[j].numerator / fractions[j].denominator >
                (double)fractions[j + 1].numerator / fractions[j + 1].denominator)
            {
                temp = fractions[j];
                fractions[j] = fractions[j + 1];
                fractions[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int n, i;
    int choice;
    struct Fraction *fractions;
    struct Fraction largest;
    struct Fraction smallest;

    printf("Enter the number of fractions: ");
    scanf("%d", &n);

    // Dynamically allocate memory for an array of n fractions
    fractions = (struct Fraction *)malloc(n * sizeof(struct Fraction));

    if (fractions == NULL)
    {
        printf("Memory allocation failed.");
        return 1;
    }

    // Accept details of n fractions and store them in reduced form
    for (i = 0; i < n; i++)
    {
        printf("Enter the numerator for fraction %d: ", i + 1);
        scanf("%d", &fractions[i].numerator);
        printf("Enter the denominator for fraction %d: ", i + 1);
        scanf("%d", &fractions[i].denominator);

        // Reduce the fraction to its simplest form
        reduceFraction(&fractions[i]);
    }

    while (1)
    {
        printf("\nMenu:\n");
        printf("1. Display the largest fraction\n");
        printf("2. Display the smallest fraction\n");
        printf("3. Sort fractions\n");
        printf("4. Display all fractions\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        {
            largest = findLargestFraction(fractions, n);
            printf("Largest Fraction: ");
            displayFraction(&largest);
            printf("\n");
            break;
        }
        case 2:
        {
            smallest = findSmallestFraction(fractions, n);
            printf("Smallest Fraction: ");
            displayFraction(&smallest);
            printf("\n");
            break;
        }
        case 3:
        {
            sortFractions(fractions, n);
            printf("Fractions sorted in ascending order.\n");
            break;
        }
        case 4:
        {
            printf("All Fractions:\n");
            for (i = 0; i < n; i++)
            {
                displayFraction(&fractions[i]);
                printf("\n");
            }
            break;
        }
        case 5:
        {
            // Free dynamically allocated memory and exit
            free(fractions);
            return 0;
        }
        default:
            printf("Invalid choice. Please enter a valid option.\n");
        }
    }
}
