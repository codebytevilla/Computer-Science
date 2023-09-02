// Description: This program stores country names and their corresponding capitals in two constant arrays.
// It then allows the user to input a country name and displays its capital.

#include <stdio.h>
#include <string.h>

// Define constant arrays of country names and their capitals
const char *countries[] = {
    "India",
    "France",
    // Add more countries here
};

const char *capitals[] = {
    "Delhi",
    "Paris",
    // Add more capitals here
};

int main()
{
    char input[50]; // Assuming the maximum length of a country name is 50 characters
    int found = 0;
    int i;
    printf("Enter a country name: ");
    scanf("%s", input);

    for (i = 0; i < sizeof(countries) / sizeof(countries[0]); i++)
    {
        if (strcmp(input, countries[i]) == 0)
        {
            printf("The capital of %s is %s.\n", input, capitals[i]);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("Country not found in the list.\n");
    }

    return 0;
}
