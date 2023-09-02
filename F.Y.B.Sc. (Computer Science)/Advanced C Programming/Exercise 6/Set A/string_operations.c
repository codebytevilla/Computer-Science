#include <stdio.h>
#include <ctype.h> // for toupper and tolower functions
#include <string.h>

// Function to calculate the length of a string using pointers
int stringLength(const char *str)
{
    const char *temp = str;
    while (*temp != '\0')
    {
        temp++;
    }
    return temp - str;
}

// Function to reverse a string using pointers
void reverseString(char *str)
{
    char temp;
    char *start = str;
    char *end = str + strlen(str) - 1;

    while (start < end)
    {
        // Swap characters at start and end pointers
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

// Function to convert a string to uppercase using pointers
void toUpperCase(char *str)
{
    while (*str != '\0')
    {
        *str = toupper(*str);
        str++;
    }
}

// Function to convert a string to lowercase using pointers
void toLowerCase(char *str)
{
    while (*str != '\0')
    {
        *str = tolower(*str);
        str++;
    }
}

int main()
{
    char inputString[100];
    int choice;

    printf("Enter a string: ");
    scanf("%s", inputString);

    printf("Menu:\n");
    printf("1. Length of the string\n");
    printf("2. Reverse the string\n");
    printf("3. Convert to Uppercase\n");
    printf("4. Convert to Lowercase\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Length of the string: %d\n", stringLength(inputString));
        break;
    case 2:
        reverseString(inputString);
        printf("Reversed string: %s\n", inputString);
        break;
    case 3:
        toUpperCase(inputString);
        printf("String in Uppercase: %s\n", inputString);
        break;
    case 4:
        toLowerCase(inputString);
        printf("String in Lowercase: %s\n", inputString);
        break;
    default:
        printf("Invalid choice\n");
    }

    return 0;
}
