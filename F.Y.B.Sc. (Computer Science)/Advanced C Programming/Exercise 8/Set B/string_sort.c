// This program sorts a string in ascending or descending order
// based on the command-line argument (0 for ascending, 1 for descending).
// It uses a macro for character comparison.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Macro for character comparison
#define CHAR_COMPARE(a, b, order) (order == 1 ? (a < b) : (a > b))

// Function to perform bubble sort
void bubbleSort(char *str, int length, int order)
{
    int swapped, i;
    char temp;

    do
    {
        swapped = 0;
        for (i = 0; i < length - 1; i++)
        {
            if (CHAR_COMPARE(str[i], str[i + 1], order))
            {
                // Swap characters
                temp = str[i];
                str[i] = str[i + 1];
                str[i + 1] = temp;
                swapped = 1;
            }
        }
    } while (swapped);
}

int main(int argc, char *argv[])
{
    char *str;
    int order, length;
    // Check for the correct number of arguments
    if (argc != 3)
    {
        printf("Usage: %s <string> <0 or 1>\n", argv[0]);
        return 1; // Return an error code
    }

    // Get the string and order from command-line arguments
    str = argv[1];
    order = atoi(argv[2]);

    // Get the length of the string
    length = strlen(str);

    // Sort the string
    bubbleSort(str, length, order);

    // Display the sorted string
    printf("Sorted String: %s\n", str);

    return 0; // Return success
}
