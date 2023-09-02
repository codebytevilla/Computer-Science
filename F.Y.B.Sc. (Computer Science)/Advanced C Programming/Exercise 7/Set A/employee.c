#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to represent an employee
struct Employee
{
    int id;
    char name[100];
    float salary;
};

// Function to search for an employee by name
void searchByName(struct Employee employees[], int n, char searchName[])
{
    int i;

    printf("Employees with name '%s':\n", searchName);
    for (i = 0; i < n; i++)
    {
        if (strcmp(employees[i].name, searchName) == 0)
        {
            printf("ID: %d, Name: %s, Salary: %.2f\n", employees[i].id, employees[i].name, employees[i].salary);
        }
    }
}

// Function to search for an employee by ID
void searchById(struct Employee employees[], int n, int searchId)
{
    int i;

    for (i = 0; i < n; i++)
    {
        if (employees[i].id == searchId)
        {
            printf("Employee found with ID %d:\n", searchId);
            printf("ID: %d, Name: %s, Salary: %.2f\n", employees[i].id, employees[i].name, employees[i].salary);
            return;
        }
    }
    printf("No employee found with ID %d.\n", searchId);
}

// Function to display all employees
void displayAll(struct Employee employees[], int n)
{
    int i;

    printf("All employees:\n");
    for (i = 0; i < n; i++)
    {
        printf("ID: %d, Name: %s, Salary: %.2f\n", employees[i].id, employees[i].name, employees[i].salary);
    }
}

// Function to display employees with salary greater than a given value
void displaySalaryAbove(struct Employee employees[], int n, float minSalary)
{
    int i;

    printf("Employees with salary greater than %.2f:\n", minSalary);
    for (i = 0; i < n; i++)
    {
        if (employees[i].salary > minSalary)
        {
            printf("ID: %d, Name: %s, Salary: %.2f\n", employees[i].id, employees[i].name, employees[i].salary);
        }
    }
}

// Function to display the employee with the maximum salary
void displayMaxSalary(struct Employee employees[], int n)
{
    int maxIndex = 0;
    int i;

    if (n == 0)
    {
        printf("No employees in the database.\n");
        return;
    }

    for (i = 1; i < n; i++)
    {
        if (employees[i].salary > employees[maxIndex].salary)
        {
            maxIndex = i;
        }
    }

    printf("Employee with maximum salary:\n");
    printf("ID: %d, Name: %s, Salary: %.2f\n", employees[maxIndex].id, employees[maxIndex].name, employees[maxIndex].salary);
}

int main()
{
    int n, i;
    int choice;
    char searchName[100];
    int searchId;
    float minSalary;
    struct Employee *employees = NULL;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    // Dynamically allocate memory for n employees
    employees = (struct Employee *)malloc(n * sizeof(struct Employee));

    // Input employee details
    for (i = 0; i < n; i++)
    {
        printf("Enter details for Employee %d:\n", i + 1);
        employees[i].id = i + 1;
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }

    do
    {
        printf("\nMenu:\n");
        printf("1. Search by name\n");
        printf("2. Search by ID\n");
        printf("3. Display all employees\n");
        printf("4. Display employees with salary >\n");
        printf("5. Display employee with maximum salary\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter name to search: ");
            scanf("%s", searchName);
            searchByName(employees, n, searchName);
            break;
        case 2:
            printf("Enter ID to search: ");
            scanf("%d", &searchId);
            searchById(employees, n, searchId);
            break;
        case 3:
            displayAll(employees, n);
            break;
        case 4:
            printf("Enter minimum salary: ");
            scanf("%f", &minSalary);
            displaySalaryAbove(employees, n, minSalary);
            break;
        case 5:
            displayMaxSalary(employees, n);
            break;
        case 6:
            break;
        default:
            printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 6);

    // Free the allocated memory
    free(employees);
}
