// This program accepts n numbers, identifies prime numbers,
// stores them in an array, and displays the array.

#include <stdio.h>

int isPrime(int num)
{
    int i;

    if (num <= 1)
    {
        return 0; // Not a prime number
    }

    for (i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return 0; // Not a prime number
        }
    }
    return 1; // Prime number
}

int main()
{
    int n, i;
    int prime[100];
    int numbers[100]; // Assuming all n numbers are prime for now
    int primeCount = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (isPrime(numbers[i]))
        {
            prime[primeCount] = numbers[i];
            primeCount++;
        }
    }

    printf("Prime numbers in the array are:\n");
    for (i = 0; i < primeCount; i++)
    {
        printf("%d ", prime[i]);
    }

    printf("\n");
}
