#include <stdio.h>
#include <ctype.h>

int main()
{
    // Define a file pointer to handle the file
    FILE *filePointer;
    char ch;
    // Open the file "a.txt" for reading
    filePointer = fopen("a.txt", "r");

    // Check if the file opened successfully
    if (filePointer == NULL)
    {
        printf("Unable to open the file.\n");
        return 1; // Exit with an error code
    }

    // Read characters from the file and display them with reversed case
    while ((ch = fgetc(filePointer)) != EOF)
    {
        if (isalpha(ch))
        {
            if (islower(ch))
            {
                ch = toupper(ch); // Convert lowercase to uppercase
            }
            else
            {
                ch = tolower(ch); // Convert uppercase to lowercase
            }
        }
        putchar(ch); // Display the character
    }

    // Close the file
    fclose(filePointer);

    return 0; // Exit successfully
}
