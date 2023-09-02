#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int i;
    char *inputString;
    char charToReplace;
    char replacementChar;

    // Check if the correct number of command-line arguments are provided.
    if (argc != 4)
    {
        printf("Usage: %s <input_string> <character_to_replace> <replacement_character>\n", argv[0]);
        return 1;
    }

    // Retrieve the input string and characters from command-line arguments.
    inputString = argv[1];
    charToReplace = argv[2][0];   // Take the first character of the second argument.
    replacementChar = argv[3][0]; // Take the first character of the third argument.

    // Iterate through the input string and replace all occurrences of charToReplace with replacementChar.
    for (i = 0; i < strlen(inputString); i++)
    {
        if (inputString[i] == charToReplace)
        {
            inputString[i] = replacementChar;
        }
    }

    // Print the modified string.
    printf("Modified string: %s\n", inputString);

    return 0;
}
