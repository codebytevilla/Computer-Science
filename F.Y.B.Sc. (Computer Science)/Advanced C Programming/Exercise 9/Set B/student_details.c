#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to store student details
struct Student
{
    int rollNumber;
    char name[50];
    float percentage;
};

// Function to write student details to the file
void writeStudentDetailsToFile(struct Student students[], int n)
{
    FILE *file = fopen("student.txt", "w");
    int i;

    if (file == NULL)
    {
        printf("Error opening the file.\n");
        exit(1);
    }

    for (i = 0; i < n; i++)
    {
        fprintf(file, "%d %s %.2f\n", students[i].rollNumber, students[i].name, students[i].percentage);
    }

    fclose(file);
}

// Function to search for a student by roll number
void searchStudentByRollNumber(int rollNumberToSearch)
{
    FILE *file = fopen("student.txt", "r");
    struct Student student;
    int found = 0;

    if (file == NULL)
    {
        printf("Error opening the file.\n");
        exit(1);
    }

    while (fscanf(file, "%d %s %f", &student.rollNumber, student.name, &student.percentage) != EOF)
    {
        if (student.rollNumber == rollNumberToSearch)
        {
            printf("Student Found!\n");
            printf("Roll Number: %d\n", student.rollNumber);
            printf("Name: %s\n", student.name);
            printf("Percentage: %.2f\n", student.percentage);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("Student not found with Roll Number: %d\n", rollNumberToSearch);
    }

    fclose(file);
}

// Function to find the student with the highest percentage
void findStudentWithHighestPercentage()
{
    FILE *file = fopen("student.txt", "r");
    struct Student student, highestPercentageStudent;
    float highestPercentage = -1.0;

    if (file == NULL)
    {
        printf("Error opening the file.\n");
        exit(1);
    }

    while (fscanf(file, "%d %s %f", &student.rollNumber, student.name, &student.percentage) != EOF)
    {
        if (student.percentage > highestPercentage)
        {
            highestPercentage = student.percentage;
            highestPercentageStudent = student;
        }
    }

    printf("Student with Highest Percentage:\n");
    printf("Roll Number: %d\n", highestPercentageStudent.rollNumber);
    printf("Name: %s\n", highestPercentageStudent.name);
    printf("Percentage: %.2f\n", highestPercentageStudent.percentage);

    fclose(file);
}

int main()
{
    int n, i;
    int choice;
    struct Student students[100];

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Percentage: ");
        scanf("%f", &students[i].percentage);
    }

    // Write student details to the file
    writeStudentDetailsToFile(students, n);

    printf("\nEnter Roll Number to search for a student: ");
    scanf("%d", &choice);
    searchStudentByRollNumber(choice);

    // Find and display the student with the highest percentage
    findStudentWithHighestPercentage();

    return 0;
}
