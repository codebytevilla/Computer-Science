// This program defines a recursive function to calculate the sum of digits of a number until a single-digit number is obtained.

#include <stdio.h>

// Recursive function to calculate the sum of digits until a single-digit number is obtained
int calculateRecursiveDigitSum(int num) {
    // Base case: if the number is a single-digit number, return it
    if (num < 10) {
        return num;
    } else {
        // Calculate the sum of digits
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        // Recursively call the function with the calculated sum
        return calculateRecursiveDigitSum(sum);
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int result = calculateRecursiveDigitSum(num);
    printf("Final single-digit sum: %d\n", result);

}


