#include <stdio.h>

#define MAX_SIZE 10

// Function to input a square matrix from the user
void acceptMatrix(int matrix[MAX_SIZE][MAX_SIZE], int size)
{
    int i, j;

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to check if the matrix is symmetric
int isSymmetric(int matrix[MAX_SIZE][MAX_SIZE], int size)
{
    int i, j;

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            if (matrix[i][j] != matrix[j][i])
            {
                return 0; // Not symmetric
            }
        }
    }
    return 1; // Symmetric
}

// Function to calculate the trace of the matrix
int calculateTrace(int matrix[MAX_SIZE][MAX_SIZE], int size)
{
    int trace = 0;
    int i;

    for (i = 0; i < size; i++)
    {
        trace += matrix[i][i];
    }
    return trace;
}

// Function to check if the matrix is upper triangular
int isUpperTriangular(int matrix[MAX_SIZE][MAX_SIZE], int size)
{
    int i, j;

    for (i = 1; i < size; i++)
    {
        for (j = 0; j < i; j++)
        {
            if (matrix[i][j] != 0)
            {
                return 0; // Not upper triangular
            }
        }
    }
    return 1; // Upper triangular
}

// Function to check if the matrix is lower triangular
int isLowerTriangular(int matrix[MAX_SIZE][MAX_SIZE], int size)
{
    int i, j;

    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (matrix[i][j] != 0)
            {
                return 0; // Not lower triangular
            }
        }
    }
    return 1; // Lower triangular
}

// Function to check if the matrix is an identity matrix
int isIdentityMatrix(int matrix[MAX_SIZE][MAX_SIZE], int size)
{
    int i, j;

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            if ((i == j && matrix[i][j] != 1) || (i != j && matrix[i][j] != 0))
            {
                return 0; // Not an identity matrix
            }
        }
    }
    return 1; // Identity matrix
}

int main()
{
    int matrix[MAX_SIZE][MAX_SIZE];
    int size;
    int choice;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);

    if (size > MAX_SIZE || size <= 0)
    {
        printf("Invalid matrix size.\n");
        return 1;
    }

    acceptMatrix(matrix, size);

    do
    { // Exit when choice is 6
        printf("\nChoose an operation:\n");
        printf("1. Check if the matrix is symmetric\n");
        printf("2. Display the trace of the matrix\n");
        printf("3. Check if the matrix is upper triangular\n");
        printf("4. Check if the matrix is lower triangular\n");
        printf("5. Check if the matrix is an identity matrix\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            if (isSymmetric(matrix, size))
            {
                printf("The matrix is symmetric.\n");
            }
            else
            {
                printf("The matrix is not symmetric.\n");
            }
            break;
        case 2:
            printf("The trace of the matrix is: %d\n", calculateTrace(matrix, size));
            break;
        case 3:
            if (isUpperTriangular(matrix, size))
            {
                printf("The matrix is upper triangular.\n");
            }
            else
            {
                printf("The matrix is not upper triangular.\n");
            }
            break;
        case 4:
            if (isLowerTriangular(matrix, size))
            {
                printf("The matrix is lower triangular.\n");
            }
            else
            {
                printf("The matrix is not lower triangular.\n");
            }
            break;
        case 5:
            if (isIdentityMatrix(matrix, size))
            {
                printf("The matrix is an identity matrix.\n");
            }
            else
            {
                printf("The matrix is not an identity matrix.\n");
            }
            break;
        case 6:
            printf("Exiting the program.\n");
            break;
        default:
            printf("Invalid choice.\n");
            break;
        }
     } while (choice != 6);
}
