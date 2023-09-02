#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    FILE *sourceFile;
    FILE *destFile;
    int c;

    // Check if the correct number of command line arguments are provided
    if (argc != 3)
    {
        printf("Usage: %s <source_file> <destination_file>\n", argv[0]);
        return 1;
    }

    // Open the source file for reading
    sourceFile = fopen(argv[1], "r");
    if (sourceFile == NULL)
    {
        perror("Error opening source file");
        return 2;
    }

    // Open the destination file for writing
    destFile = fopen(argv[2], "w");
    if (destFile == NULL)
    {
        perror("Error opening destination file");
        fclose(sourceFile); // Close the source file before exiting
        return 3;
    }

    // Process the source file character by character
    while ((c = fgetc(sourceFile)) != EOF)
    {
        // Check if the character is an alphabet
        if (isalpha(c))
        {
            // Reverse the case of the alphabet
            if (islower(c))
            {
                c = toupper(c);
            }
            else
            {
                c = tolower(c);
            }
        }
        // Write the character to the destination file
        fputc(c, destFile);
    }

    // Close both files
    fclose(sourceFile);
    fclose(destFile);

    printf("Contents of %s with reversed case copied to %s.\n", argv[1], argv[2]);

    return 0;
}
