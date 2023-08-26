/*
 * This program displays all perfect numbers below 500.
 * A perfect number is a number, such that the sum of its factors is equal to the number itself. For example, 6 is a perfect number because 1 + 2 + 3 = 6.
 */

#include <stdio.h>

int main()
{
    int i, j, sum;

    printf("Perfect numbers below 500: \n");
    // Loop through all numbers from 2 to 499
    for (i = 2; i < 500; i++)
    {
        sum = 1;
        // Loop through all numbers from 2 to i-1
        for (j = 2; j < i; j++)
        {
            // If i is divisible by j, add j to sum
            if (i % j == 0)
            {
                sum += j;
            }
        }
        // If sum is equal to i, print i
        if (sum == i)
        {
            printf("%d ", i);
        }
    }
}
