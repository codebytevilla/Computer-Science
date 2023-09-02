#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int choice;

    printf("String Operations Menu:\n");
    printf("1. Length\n");
    printf("2. Copy\n");
    printf("3. Concatenation\n");
    printf("4. Compare\n");
    printf("Enter your choice (1/2/3/4): ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter a string: ");
        scanf("%s", str1);
        printf("Length of the string: %ld\n", strlen(str1));
        break;

    case 2:
        printf("Enter a source string: ");
        scanf("%s", str1);
        printf("Copying the source string to destination...\n");
        strcpy(str2, str1);
        printf("Copied string: %s\n", str2);
        break;

    case 3:
        printf("Enter the first string: ");
        scanf("%s", str1);
        printf("Enter the second string: ");
        scanf("%s", str2);
        strcat(str1, str2);
        printf("Concatenated string: %s\n", str1);
        break;

    case 4:
        printf("Enter the first string: ");
        scanf("%s", str1);
        printf("Enter the second string: ");
        scanf("%s", str2);
        if (strcmp(str1, str2) == 0)
            printf("Strings are equal.\n");
        else
            printf("Strings are not equal.\n");
        break;

    default:
        printf("Invalid choice!\n");
    }

    return 0;
}
