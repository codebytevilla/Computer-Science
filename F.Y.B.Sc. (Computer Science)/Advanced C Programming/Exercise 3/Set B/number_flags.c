#include <stdio.h>
#include <math.h>

// Function to check if a number is even and set the first flag accordingly
void checkEven(int num, int *flag1)
{
    if (num % 2 == 0)
    {
        *flag1 = 1;
    }
}

// Function to check if a number is prime and set the second flag accordingly
int isPrime(int num)
{
    int i; 

    if (num <= 1)
    {
        return 0;
    }
    if (num <= 3)
    {
        return 1;
    }
    if (num % 2 == 0 || num % 3 == 0)
    {
        return 0;
    }
    for (i = 5; i * i <= num; i += 6)
    {
        if (num % i == 0 || num % (i + 2) == 0)
        {
            return 0;
        }
    }
    return 1;
}

// Function to check if a number is divisible by 3 or 7 and set the third flag accordingly
void checkDivisibility(int num, int *flag3)
{
    if (num % 3 == 0 || num % 7 == 0)
    {
        *flag3 = 1;
    }
}

int main()
{
    int number;
    int flag1 = 0; // Flag to store even check result (0 or 1)
    int flag2 = 0; // Flag to store prime check result (0 or 1)
    int flag3 = 0; // Flag to store divisibility check result (0 or 1)

    // Input a number from the user
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check if the number is even
    checkEven(number, &flag1);

    // Check if the number is prime
    flag2 = isPrime(number);

    // Check if the number is divisible by 3 or 7
    checkDivisibility(number, &flag3);

    // Output the results
    if (flag1)
    {
        printf("%d is even.\n", number);
    }
    else
    {
        printf("%d is not even.\n", number);
    }

    if (flag2)
    {
        printf("%d is prime.\n", number);
    }
    else
    {
        printf("%d is not prime.\n", number);
    }

    if (flag3)
    {
        printf("%d is divisible by 3 or 7.\n", number);
    }
    else
    {
        printf("%d is not divisible by 3 or 7.\n", number);
    }

}
