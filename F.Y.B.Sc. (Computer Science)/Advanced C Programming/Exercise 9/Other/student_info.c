#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char str[20];
    int num, n, i;

    // Prompt the user for the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    fp = fopen("student.txt", "w+");
    if (fp == NULL)
    {
        printf("File opening error\n");
        exit(1);
    }

    // Input details for 'n' students and write to the file
    for (i = 0; i < n; i++)
    {
        printf("Enter student name and ID (e.g., ABC 1000): ");
        scanf("%s %d", str, &num);
        fprintf(fp, "%s\t%d\n", str, num);
    }

    rewind(fp);

    // Read and display the contents from the file
    printf("\nContents of the file:\n");
    while (fscanf(fp, "%s %d", str, &num) == 2)
    {
        printf("%s\t%d\n", str, num);
    }

    fclose(fp);
}
