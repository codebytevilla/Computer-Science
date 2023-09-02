#include <stdio.h>
#include <string.h>

int main()
{
    int n, i;
    char strings[100][100];
    char longest[100];

    // Prompt the user to enter the number of strings
    printf("Enter the number of strings: ");
    scanf("%d", &n);

    // Ensure n is a positive integer
    if (n <= 0)
    {
        printf("Invalid input. Please enter a positive integer for the number of strings.\n");
        return 1; // Exit with an error code
    }

    // Read the strings from the user
    for (i = 0; i < n; i++)
    {
        printf("Enter string %d: ", i + 1);
        scanf("%s", strings[i]);
    }

    // Find the longest string
    strcpy(longest, strings[0]); // Assume the first string is the longest initially

    for (i = 1; i < n; i++)
    {
        if (strlen(strings[i]) > strlen(longest))
        {
            strcpy(longest, strings[i]);
        }
    }

    // Display the longest string
    printf("The longest string is: %s\n", longest);

    return 0; // Exit with success
}
