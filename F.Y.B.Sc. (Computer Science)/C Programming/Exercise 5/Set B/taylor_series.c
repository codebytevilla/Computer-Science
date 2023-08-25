#include <stdio.h>
#include <stdlib.h>

// This function calculates xy.
int power(int x, int y)
{
    int i, result = 1;
    for (i = 0; i < y; i++)
    {
        result *= x;
    }
    return result;
}

// This function calculates n! using a for loop.
int factorial(int n)
{
    int i, result = 1;
    for (i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}

// This function calculates the sum of first n terms of the Taylor series for x.
double taylor_series(double x, int n)
{
    double term, sum = x;
    int i;
    for (i = 1; i <= n; i++)
    {
        term = pow(-1, i) * pow(x, 2 * i - 1) / factorial(2 * i - 1);
        sum += term;
    }
    return sum;
}

int main()
{
    int n;
    double x, sum;

    // Get the input from the user.
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of x: ");
    scanf("%lf", &x);

    // Calculate the sum of the first n terms of the Taylor series.
    sum = taylor_series(x, n);

    // Print the result.
    printf("The sum of the first %d terms of the Taylor series for x: %lf\n", n, sum);

}
