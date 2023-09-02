#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *fp;
    char ch, userChar;
    int count = 0;

    // Open the file for reading
    fp = fopen("a.txt", "r");
    if (fp == NULL)
    {
        printf("File opening error\n");
        return 1; // Return an error code
    }

    // Prompt the user for a character
    printf("Enter a character to count in the file: ");
    scanf(" %c", &userChar); // Use a space before %c to skip whitespace characters

    while ((ch = fgetc(fp)) != EOF)
    {
        // Check if the current character matches the user's character
        if (tolower(ch) == tolower(userChar))
        {
            count++;
        }
    }

    // Close the file
    fclose(fp);

    // Display the count
    printf("The character '%c' occurs %d times in the file.\n", userChar, count);

    return 0; // Return 0 to indicate successful execution
}
