// This program prints the first 10 prime numbers.
// The function `isPrime` checks if a number is prime.

#include <stdio.h>

// Returns 1 if the number n is prime, and 0 otherwise.
int isPrime(int n)
{
    int i;
    // A prime number has exactly two factors: 1 and itself.
    // So, we check if n is divisible by any number other than 1 and itself.
    for (i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    // Initialize the variables.
    int n = 2, count = 0;

    // Loop until we find the first 10 prime numbers.
    while (count < 10)
    {
        if (isPrime(n))
        {
            printf("%d ", n);
            count++;
        }
        n++;
    }

    // Print a newline character.
    printf("\n");
}
