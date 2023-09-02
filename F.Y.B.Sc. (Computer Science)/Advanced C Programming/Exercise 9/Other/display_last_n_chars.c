#include <stdio.h>
#include <stdlib.h> // Include this header for the exit() function

int main(int argc, char *argv[])
{
    FILE *fp;
    long int size;
    int n = atoi(argv[2]);
    long int start_position;
    char *buffer;

    // Open the file for reading
    fp = fopen(argv[1], "r");
    if (fp == NULL)
    {
        printf("File opening error\n");
        exit(1); // Exit with an error code
    }

    // Move the file pointer to the end of the file
    fseek(fp, 0, SEEK_END);

    // Get the current position of the file pointer (which is the file size)
    size = ftell(fp);

    // Calculate the starting position from where to read the last 'n' characters
    start_position = size - n;

    // Ensure the start position is non-negative
    if (start_position < 0)
    {
        start_position = 0;
    }

    // Set the file pointer to the calculated start position
    fseek(fp, start_position, SEEK_SET);

    // Allocate a buffer to store the last 'n' characters
    buffer = (char *)malloc(n + 1);

    // Read 'n' characters from the file into the buffer
    fread(buffer, 1, n, fp);

    // Null-terminate the buffer to treat it as a string
    buffer[n] = '\0';

    // Close the file
    fclose(fp);

    // Display the last 'n' characters
    printf("Last %d characters from the file:\n%s\n", n, buffer);

    // Free the allocated buffer
    free(buffer);

    return 0; // Exit with a success code
}
