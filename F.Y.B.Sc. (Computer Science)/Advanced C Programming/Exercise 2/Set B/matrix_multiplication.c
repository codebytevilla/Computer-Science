#include <stdio.h>

// Function to accept a matrix from the user
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
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to multiply two matrices
void multiplyMatrices(int mat1[100][100], int mat2[100][100], int result[100][100], int rows1, int cols1, int rows2, int cols2)
{
    int i, j, k;

    if (cols1 != rows2)
    {
        printf("Matrix multiplication not possible. Number of columns in the first matrix must be equal to the number of rows in the second matrix.\n");
        return;
    }

    for (i = 0; i < rows1; i++)
    {
        for (j = 0; j < cols2; j++)
        {
            result[i][j] = 0;
            for (k = 0; k < cols1; k++)
            {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main()
{
    int rows1, cols1, rows2, cols2;
    int matrix1[100][100], matrix2[100][100], resultMatrix[100][100];

    printf("Enter the number of rows and columns for the first matrix: ");
    scanf("%d %d", &rows1, &cols1);

    printf("Enter the number of rows and columns for the second matrix: ");
    scanf("%d %d", &rows2, &cols2);

    if (cols1 != rows2)
    {
        printf("Matrix multiplication is not possible. The number of columns in the first matrix must be equal to the number of rows in the second matrix.\n");
        return 1; // Exit the program with an error code
    }

    // Input matrices
    printf("For Matrix 1:\n");
    acceptMatrix(matrix1, rows1, cols1);
    printf("For Matrix 2:\n");
    acceptMatrix(matrix2, rows2, cols2);

    // Multiply matrices
    multiplyMatrices(matrix1, matrix2, resultMatrix, rows1, cols1, rows2, cols2);

    // Display the result
    displayMatrix(resultMatrix, rows1, cols2);

    return 0; // Exit the program successfully
}
