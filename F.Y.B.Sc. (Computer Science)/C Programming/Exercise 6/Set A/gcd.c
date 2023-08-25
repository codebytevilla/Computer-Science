// This program calculates the greatest common divisor (GCD) of two numbers using recursion.

#include <stdio.h>

int gcd(int a, int b)
{
    /* Base case */
    if (b == 0)
    {
        return a;
    }

    /* Recursive case */
    return gcd(b, a % b);
}

int main()
{
    int a, b;
    int ans;

    /* Get two numbers from the user */
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    /* Calculate the GCD */
    ans = gcd(a, b);

    /* Print the GCD */
    printf("The greatest common divisor of %d and %d is %d\n", a, b, ans);
}
