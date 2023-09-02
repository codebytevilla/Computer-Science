#include <stdio.h>
#include <ctype.h> // for isdigit

int main()
{
    char sentence[1000]; // Assuming the sentence won't exceed 1000 characters
    int i;
    // Prompt the user for input
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Process each character in the sentence
    for (i = 0; sentence[i] != '\0'; i++)
    {
        // Check if the character is a space
        if (sentence[i] == ' ')
        {
            putchar('*'); // Replace space with *
        }
        else if (isalpha(sentence[i]))
        { // Check if the character is an alphabet and change its case
            if (isupper(sentence[i]))
            {
                putchar(tolower(sentence[i])); // Change uppercase to lowercase
            }
            else
            {
                putchar(toupper(sentence[i])); // Change lowercase to uppercase
            }
        }
        else if (isdigit(sentence[i]))
        {
            // Check if the character is a digit
            putchar('?'); // Replace digits with ?
        }
        else
        {
            // Keep other characters as they are
            putchar(sentence[i]);
        }
    }

    return 0;
}
