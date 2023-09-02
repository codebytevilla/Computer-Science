#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *file;
    long int file_size;

    // Check if the correct number of command-line arguments is provided
    if (argc != 2)
    {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1; // Return an error code to indicate improper usage
    }

    // Open the file in binary read mode
    file = fopen(argv[1], "rb");

    // Check if the file was successfully opened
    if (file == NULL)
    {
        perror("Error opening file");
        return 2; // Return an error code to indicate file opening failure
    }

    // Seek to the end of the file to get its size
    fseek(file, 0, SEEK_END);
    file_size = ftell(file);

    // Close the file
    fclose(file);

    // Check if the file size retrieval was successful
    if (file_size == -1L)
    {
        perror("Error getting file size");
        return 3; // Return an error code to indicate file size retrieval failure
    }

    // Print the file size
    printf("Size of file '%s' is %ld bytes.\n", argv[1], file_size);

    return 0; // Return 0 to indicate successful execution
}
