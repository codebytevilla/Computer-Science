// This program accepts a single digit from the user 
// and displays it in words using a switch-case statement.

#include <stdio.h>

int main() {
    int digit;

    // Prompt the user for input
    printf("Enter a single digit: ");
    scanf("%d", &digit);

    // Check if the input is a single digit
    if (digit >= 0 && digit <= 9) {
        // Convert the digit to its corresponding word
        switch (digit) {
            case 0:
                printf("Zero\n");
                break;
            case 1:
                printf("One\n");
                break;
            case 2:
                printf("Two\n");
                break;
            case 3:
                printf("Three\n");
                break;
            case 4:
                printf("Four\n");
                break;
            case 5:
                printf("Five\n");
                break;
            case 6:
                printf("Six\n");
                break;
            case 7:
                printf("Seven\n");
                break;
            case 8:
                printf("Eight\n");
                break;
            case 9:
                printf("Nine\n");
                break;
            default:
                printf("Invalid input\n");
        }
    } else {
        printf("Input is not a single digit\n");
    }
}
