#include <stdio.h>
#include <string.h>

// Define the structure for student
struct student
{
    int roll_number;
    char name[50];
    float marks[3];
    float percentage;
};

// Function to search for a student by roll number
void searchStudent(struct student students[], int n, int roll)
{
    int i;

    for (i = 0; i < n; i++)
    {
        if (students[i].roll_number == roll)
        {
            printf("Student Found:\n");
            printf("Roll Number: %d\n", students[i].roll_number);
            printf("Name: %s\n", students[i].name);
            printf("Marks: %.2f, %.2f, %.2f\n", students[i].marks[0], students[i].marks[1], students[i].marks[2]);
            printf("Percentage: %.2f%%\n", students[i].percentage);
            return;
        }
    }
    printf("Student with Roll Number %d not found.\n", roll);
}

// Function to modify student details by roll number
void modifyStudent(struct student students[], int n, int roll)
{
    int  i;

    for (i = 0; i < n; i++)
    {
        if (students[i].roll_number == roll)
        {
            printf("Enter new details for student with Roll Number %d:\n", roll);
            printf("Name: ");
            scanf("%s", students[i].name);
            printf("Marks for 3 subjects: ");
            scanf("%f %f %f", &students[i].marks[0], &students[i].marks[1], &students[i].marks[2]);
            // Recalculate percentage
            students[i].percentage = (students[i].marks[0] + students[i].marks[1] + students[i].marks[2]) / 3.0;
            printf("Details modified successfully.\n");
            return;
        }
    }
    printf("Student with Roll Number %d not found.\n", roll);
}

// Function to display details of all students
void displayAllStudents(struct student students[], int n)
{
    int i;

    printf("List of all students:\n");
    for (i = 0; i < n; i++)
    {
        printf("Roll Number: %d, Name: %s, Percentage: %.2f%%\n", students[i].roll_number, students[i].name, students[i].percentage);
    }
}

// Function to display students with a percentage greater than a specified value
void displayStudentsAbovePercentage(struct student students[], int n, float threshold)
{
    int i;

    printf("Students with Percentage > %.2f%%:\n", threshold);
    for (i = 0; i < n; i++)
    {
        if (students[i].percentage > threshold)
        {
            printf("Roll Number: %d, Name: %s, Percentage: %.2f%%\n", students[i].roll_number, students[i].name, students[i].percentage);
        }
    }
}

// Function to display the student with the maximum percentage
void displayStudentWithMaxPercentage(struct student students[], int n)
{
    float maxPercentage = -1.0;
    int maxIndex = -1;
    int i;

    for (i = 0; i < n; i++)
    {
        if (students[i].percentage > maxPercentage)
        {
            maxPercentage = students[i].percentage;
            maxIndex = i;
        }
    }

    if (maxIndex != -1)
    {
        printf("Student with Maximum Percentage:\n");
        printf("Roll Number: %d, Name: %s, Percentage: %.2f%%\n", students[maxIndex].roll_number, students[maxIndex].name, students[maxIndex].percentage);
    }
}

int main()
{
    int n, i;
    int choice, roll;
    float threshold;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Create an array of students
    struct student students[n];

    // Input student details
    for (i = 0; i < n; i++)
    {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_number);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Marks for 3 subjects: ");
        scanf("%f %f %f", &students[i].marks[0], &students[i].marks[1], &students[i].marks[2]);
        // Calculate percentage
        students[i].percentage = (students[i].marks[0] + students[i].marks[1] + students[i].marks[2]) / 3.0;
    }

    do
    {
        printf("\nMenu:\n");
        printf("1. Search Student\n");
        printf("2. Modify Student Details\n");
        printf("3. Display All Students\n");
        printf("4. Display Students with Percentage > X\n");
        printf("5. Display Student with Maximum Percentage\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Roll Number to search: ");
            scanf("%d", &roll);
            searchStudent(students, n, roll);
            break;
        case 2:
            printf("Enter Roll Number to modify: ");
            scanf("%d", &roll);
            modifyStudent(students, n, roll);
            break;
        case 3:
            displayAllStudents(students, n);
            break;
        case 4:
            printf("Enter the threshold percentage: ");
            scanf("%f", &threshold);
            displayStudentsAbovePercentage(students, n, threshold);
            break;
        case 5:
            displayStudentWithMaxPercentage(students, n);
            break;
        case 6:
            printf("Exiting program.\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 6);
}
