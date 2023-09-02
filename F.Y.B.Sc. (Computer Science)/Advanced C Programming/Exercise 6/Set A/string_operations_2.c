#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to copy a string using pointers
char *copyString(const char *src)
{
    int length = strlen(src);
    char *dest = (char *)malloc((length + 1) * sizeof(char));

    if (dest == NULL)
    {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    for (int i = 0; i <= length; i++)
    {
        dest[i] = src[i];
    }

    return dest;
}

// Function to concatenate two strings using pointers
char *concatenateStrings(const char *str1, const char *str2)
{
    int length1 = strlen(str1);
    int length2 = strlen(str2);
    int i, j;

    char *result = (char *)malloc((length1 + length2 + 1) * sizeof(char));

    if (result == NULL)
    {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    for (i = 0; i < length1; i++)
    {
        result[i] = str1[i];
    }

    for (j = 0; j < length2; j++)
    {
        result[i + j] = str2[j];
    }

    result[i + j] = '\0';

    return result;
}

// Function to compare two strings using pointers
int compareStrings(const char *str1, const char *str2)
{
    while (*str1 && *str2)
    {
        if (*str1 != *str2)
        {
            return (*str1 - *str2);
        }
        str1++;
        str2++;
    }
    return (*str1 - *str2);
}

int main()
{
    char str1[100], str2[100];
    int choice;

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    printf("Choose an operation:\n");
    printf("1. Copy\n");
    printf("2. Concatenate\n");
    printf("3. Compare\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        // Copy operation
        // Can use built in function strcpy(str1, str2); 
        // The strcpy function is used for the copy operation.
        printf("Result of copy operation: %s\n", copyString(str1));
        break;
    case 2:
        // Concatenate operation
        // Can use built in function strcat(str1, str2);
        // The strcat function is used for the concatenate operation. 
        printf("Result of concatenate operation: %s\n", concatenateStrings(str1, str2));
        break;
    case 3:
        // Compare operation
        // Can use built in function strcmp(str1, str2)
        // The strcmp function is used for the compare operation.
        if (compareStrings(str1, str2) == 0)
        {
            printf("Strings are equal.\n");
        }
        else
        {
            printf("Strings are not equal.\n");
        }
        break;
    default:
        printf("Invalid choice.\n");
    }

    return 0;
}
