#include <stdio.h>

int main(int argc, char *argv[])
{

    FILE *file;
    int wordCount = 0, lineCount = 0, charCount = 0;
    char c, prevChar = ' ';

    // Check if the correct number of command-line arguments is provided
    if (argc != 2)
    {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    // Open the file for reading
    file = fopen(argv[1], "r");

    // Check if the file exists
    if (file == NULL)
    {
        printf("Could not open file: %s\n", argv[1]);
        return 1;
    }

    // Read the file character by character
    while ((c = fgetc(file)) != EOF)
    {
        charCount++;

        // Check for line break
        if (c == '\n')
        {
            lineCount++;
        }

        // Check for word boundaries (spaces, tabs, and line breaks)
        if (c == ' ' || c == '\t' || c == '\n')
        {
            if (prevChar != ' ' && prevChar != '\t' && prevChar != '\n')
            {
                wordCount++;
            }
        }

        prevChar = c;
    }

    // Check for the last word if the file doesn't end with a space or line break
    if (prevChar != ' ' && prevChar != '\t' && prevChar != '\n')
    {
        wordCount++;
    }

    // Close the file
    fclose(file);

    // Print the results
    printf("File: %s\n", argv[1]);
    printf("Number of lines: %d\n", lineCount);
    printf("Number of words: %d\n", wordCount);
    printf("Number of characters: %d\n", charCount);

    return 0;
}
