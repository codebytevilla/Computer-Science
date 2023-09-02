#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function prototype
char *substring(char *str, int start, int end);

int main()
{
    char inputString[100]; // Maximum input string length of 100
    int start, end;
    char *result;

    // Input the string
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    // Input the start and end indices
    printf("Enter the starting index: ");
    scanf("%d", &start);
    printf("Enter the ending index: ");
    scanf("%d", &end);

    // Call the substring function
    result = substring(inputString, start, end);

    // Check if the result is NULL (invalid input indices)
    if (result == NULL)
    {
        printf("Invalid indices or substring out of bounds.\n");
    }
    else
    {
        // Print the substring
        printf("Substring: %s\n", result);

        // Free the dynamically allocated memory
        free(result);
    }

    return 0;
}

// Function to return a substring of a given string
char *substring(char *str, int start, int end)
{
    int length = strlen(str);
    int subLength;
    char *sub;

    // Check for invalid indices or substring out of bounds
    if (start < 0 || end >= length || start > end)
    {
        return NULL;
    }

    // Calculate the length of the substring
    subLength = end - start + 1;

    // Allocate memory for the substring
    sub = (char *)malloc((subLength + 1) * sizeof(char));

    if (sub == NULL)
    {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    // Copy the substring from the original string
    strncpy(sub, str + start, subLength);

    // Null-terminate the substring
    sub[subLength] = '\0';

    return sub;
}
