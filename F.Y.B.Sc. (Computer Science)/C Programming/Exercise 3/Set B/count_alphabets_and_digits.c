// This program accepts characters till the user enters EOF and counts number of alphabets and digits entered.

#include <stdio.h>

int main()
{
    int alphabets = 0, digits = 0;
    char ch;
    // Read characters from the user until the user enters EOF.
    while ((ch = getchar()) != EOF)
    {
        // Check if the character is an alphabet.
        if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
        {
            alphabets++;
        }
        else if (ch >= '0' && ch <= '9')
        {
            digits++;
        }
    }
    // Print the number of alphabets and digits entered.
    printf("Number of alphabets: %d\n", alphabets);
    printf("Number of digits: %d\n", digits);
}
