/* This program accepts a number and checks if it is a palindrome or not.
   A palindrome number remains the same even when its digits are reversed.
*/

#include <stdio.h>

int main() {
    int number, originalNumber, reversedNumber = 0, remainder;

    // Input
    printf("Enter a number: ");
    scanf("%d", &number);

    originalNumber = number; // Store the original number for comparison later

    // Reverse the number
    while (number != 0) {
        remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number /= 10;
    }

    // Check if the reversed number is equal to the original number
    if (reversedNumber == originalNumber) {
        printf("It is a palindrome.\n");
    } else {
        printf("It is not a palindrome.\n");
    }
}
