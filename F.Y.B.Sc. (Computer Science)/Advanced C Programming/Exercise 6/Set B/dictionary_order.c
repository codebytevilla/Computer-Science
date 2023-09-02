#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to compare two strings for qsort
int compareStrings(const void *a, const void *b)
{
    return strcmp(*(const char **)a, *(const char **)b);
}

int main()
{
    int n;
    char **words; // array of pointers to words
    int i;
    char buffer[100]; // Assuming a maximum word length of 99 characters

    printf("Enter the number of words: ");
    scanf("%d", &n);

    // Dynamically allocate memory for an array of pointers to store words
    words = (char **)malloc(n * sizeof(char *));

    if (words == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Input the words
    printf("Enter %d words:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%99s", buffer);
        // Dynamically allocate memory for each word and copy it
        words[i] = (char *)malloc((strlen(buffer) + 1) * sizeof(char));
        if (words[i] == NULL)
        {
            printf("Memory allocation failed.\n");
            return 1;
        }
        strcpy(words[i], buffer);
    }

    // Sort the array of pointers using the qsort function
    qsort(words, n, sizeof(char *), compareStrings);

    // Output the words in dictionary order
    printf("Words in dictionary order:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", words[i]);
        // Free the dynamically allocated memory for each word
        free(words[i]);
    }

    // Free the dynamically allocated memory for the array of pointers
    free(words);

    return 0;
}
