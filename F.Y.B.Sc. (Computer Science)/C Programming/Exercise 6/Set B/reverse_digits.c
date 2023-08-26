/*
    Recursive Function to Print Digits in Reverse Order
    - The function `printReverseDigits` takes an integer `num` and prints its digits in reverse order.
    - If the number is a single-digit number, it directly prints the digit.
    - Otherwise, it recursively calls itself on `num/10` and then prints the last digit.
*/

#include <stdio.h>

void printReverseDigits(int num)
{
    if (num < 10)
    {
        printf("%d ", num);
        return;
    }

    printf("%d ", num % 10);
    printReverseDigits(num / 10);
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Digits in reverse order: ");
    printReverseDigits(num);
}
