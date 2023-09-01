#include <stdio.h>

// Function to input a matrix from the user
void acceptMatrix(int matrix[100][100], int rows, int cols)
{
    int i, j;

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to display a matrix
void displayMatrix(int matrix[100][100], int rows, int cols)
{
    int i, j;

    printf("Matrix:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to add two matrices and store the result in a third matrix
void addMatrices(int matrix1[100][100], int matrix2[100][100], int result[100][100], int rows, int cols)
{
    int i, j;

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

int main()
{
    int rows, cols;
    int matrix1[100][100], matrix2[100][100], result[100][100];

    // Input the dimensions of the matrices
    printf("Enter the number of rows and columns for the matrices: ");
    scanf("%d %d", &rows, &cols);

    if (rows <= 0 || cols <= 0)
    {
        printf("Invalid dimensions for matrices.\n");
        return 1;
    }

    // Input the first matrix
    printf("For Matrix 1:\n");
    acceptMatrix(matrix1, rows, cols);

    // Input the second matrix
    printf("For Matrix 2:\n");
    acceptMatrix(matrix2, rows, cols);

    // Add the matrices
    addMatrices(matrix1, matrix2, result, rows, cols);

    // Display the result
    printf("Matrix after addition:\n");
    displayMatrix(result, rows, cols);
}
