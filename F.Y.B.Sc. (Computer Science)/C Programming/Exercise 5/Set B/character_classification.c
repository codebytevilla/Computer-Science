/*
This program defines a function to classify characters as alphabets, digits, or special symbols.
It then takes user input characters until EOF (Ctrl+D) is entered and counts the occurrences
of each type of character using the classification function.
*/

#include <stdio.h>

int classifyCharacter(char ch) {
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        return 1; // Alphabet
    } else if (ch >= '0' && ch <= '9') {
        return 2; // Digit
    } else {
        return 3; // Special symbol
    }
}

int main() {
    char ch;
    int alphabetCount = 0, digitCount = 0, specialCount = 0;

    printf("Enter characters (Ctrl+D to stop):\n");

    while ((ch = getchar()) != EOF) {
        int classification = classifyCharacter(ch);
        switch (classification) {
            case 1:
                alphabetCount++;
                break;
            case 2:
                digitCount++;
                break;
            case 3:
                specialCount++;
                break;
        }
    }

    printf("Alphabets: %d\n", alphabetCount);
    printf("Digits: %d\n", digitCount);
    printf("Special symbols: %d\n", specialCount);
}
