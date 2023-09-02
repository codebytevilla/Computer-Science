#include <stdio.h>

int main(int argc, char *argv[])
{
    int i;

    // Check if there are any command-line arguments
    if (argc < 2)
    {
        printf("No command-line arguments provided.\n");
        return 1; // Exit with an error code
    }

    // Loop through the arguments in reverse order
    for (i = argc - 1; i > 0; i--)
    {
        printf("Argument %d: %s\n", i, argv[i]);
    }

    return 0; // Exit successfully
}
