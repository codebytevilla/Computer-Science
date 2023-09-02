#include <stdio.h>
#include <string.h>

// Function to check if a string is a palindrome
int isPalindrome(char str[])
{
    int len = strlen(str);
    int i, j;

    // Compare characters from the beginning and end towards the center
    for (i = 0, j = len - 1; i < j; i++, j--)
    {
        if (str[i] != str[j])
        {
            return 0; // Not a palindrome
        }
    }

    return 1; // It is a palindrome
}

int main()
{
    char input[100];

    printf("Enter a string: ");
    scanf("%s", input);

    // Check if the input string is a palindrome
    if (isPalindrome(input))
    {
        printf("%s is a palindrome.\n", input);
    }
    else
    {
        printf("%s is not a palindrome.\n", input);
    }

    return 0;
}
