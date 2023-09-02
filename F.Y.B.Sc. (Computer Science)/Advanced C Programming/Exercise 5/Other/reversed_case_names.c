#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char list[10][20];
    char name[20];
    int i, n;

    printf("\n How many names ?:");
    scanf("%d", &n);

    // Consume the newline character left in the input buffer
    getchar();

    for (i = 0; i < n; i++)
    {
        printf("\n Enter name %d: ", i);
        fgets(list[i], sizeof(list[i]), stdin);

        // Remove the newline character from the input
        size_t len = strlen(list[i]);
        if (len > 0 && list[i][len - 1] == '\n')
        {
            list[i][len - 1] = '\0';
        }

        // Reverse the case of characters in the input
        for (int j = 0; list[i][j]; j++)
        {
            if (isalpha(list[i][j]))
            {
                if (islower(list[i][j]))
                {
                    list[i][j] = toupper(list[i][j]);
                }
                else
                {
                    list[i][j] = tolower(list[i][j]);
                }
            }
        }
    }

    printf("\n The names in the list are: \n");
    for (i = 0; i < n; i++)
    {
        puts(list[i]);
    }

    printf("\n Enter the name to be searched: ");
    fgets(name, sizeof(name), stdin);

    // Remove the newline character from the input
    size_t len = strlen(name);
    if (len > 0 && name[len - 1] == '\n')
    {
        name[len - 1] = '\0';
    }

    for (i = 0; i < n; i++)
    {
        if (strcmp(list[i], name) == 0)
        {
            printf("Match found at position %d\n", i);
            break;
        }
    }

    if (i == n)
    {
        printf("Name is not found in the list\n");
    }

    return 0;
}
