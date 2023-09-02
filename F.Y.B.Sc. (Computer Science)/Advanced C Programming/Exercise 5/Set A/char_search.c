#include <stdio.h>
#include <string.h>

// Function to search for a character in a string and return its position
int searchCharacter(char str[], char ch)
{
    int length = strlen(str);
    int i;

    for (i = 0; i < length; i++)
    {
        if (str[i] == ch)
        {
            return i; // Character found, return its position
        }
    }

    return -1; // Character not found
}

int main()
{
    char inputString[100];
    char searchChar;
    int position;

    // Input string from the user
    printf("Enter a string: ");
    scanf("%s", inputString);

    // Input character to search
    printf("Enter a character to search: ");
    scanf(" %c", &searchChar); // Notice the space before %c to consume the newline character

    // Call the search function and get the result
    position = searchCharacter(inputString, searchChar);

    if (position != -1)
    {
        printf("The character '%c' was found at position %d in the string.\n", searchChar, position);
    }
    else
    {
        printf("The character '%c' was not found in the string.\n", searchChar);
    }

    return 0;
}
