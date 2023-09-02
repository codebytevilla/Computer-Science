#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Function to encrypt a character using Caesar cipher
char encryptChar(char ch, int key)
{
    char base;

    if (isalpha(ch))
    {
        base = islower(ch) ? 'a' : 'A';
        return (ch - base + key) % 26 + base;
    }
    return ch;
}

int main(int argc, char *argv[])
{
    FILE *inputFile;
    FILE *outputFile;
    int key;
    char ch, encryptedChar;

    // Check for the correct number of command-line arguments
    if (argc != 3)
    {
        printf("Usage: %s <input_file> <key>\n", argv[0]);
        return 1;
    }

    // Open the input file for reading
    inputFile = fopen(argv[1], "r");

    if (inputFile == NULL)
    {
        perror("Error opening input file");
        return 1;
    }

    // Open the output file for writing
    outputFile = fopen("encrypted.txt", "w");
    if (outputFile == NULL)
    {
        perror("Error opening output file");
        fclose(inputFile);
        return 1;
    }

    // Get the key from the command-line argument
    key = atoi(argv[2]);

    while ((ch = fgetc(inputFile)) != EOF)
    {
        encryptedChar = encryptChar(ch, key);
        fputc(encryptedChar, outputFile);
    }

    // Close the input and output files
    fclose(inputFile);
    fclose(outputFile);

    printf("File encrypted successfully. Encrypted content saved in 'encrypted.txt'\n");

    return 0;
}
