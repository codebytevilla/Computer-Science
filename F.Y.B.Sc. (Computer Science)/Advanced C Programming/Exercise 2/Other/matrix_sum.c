#include <stdio.h>

// Function to accept matrix elements from the user
void acceptMatrix(int rows, int cols, int matrix[20][20])
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

// Function to display the matrix
void displayMatrix(int rows, int cols, int matrix[20][20])
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

// Function to print the sum of elements in each row and column
void printSum(int rows, int cols, int matrix[20][20])
{
    int i, j;
    int rowSum, colSum;
    // Sum of elements in each row
    printf("Sum of elements in each row:\n");
    for (i = 0; i < rows; i++)
    {
        rowSum = 0;
        for (j = 0; j < cols; j++)
        {
            rowSum += matrix[i][j];
        }
        printf("Row %d: %d\n", i + 1, rowSum);
    }

    // Sum of elements in each column
    printf("Sum of elements in each column:\n");
    for (j = 0; j < cols; j++)
    {
        colSum = 0;
        for (i = 0; i < rows; i++)
        {
            colSum += matrix[i][j];
        }
        printf("Column %d: %d\n", j + 1, colSum);
    }
}

int main()
{
    int rows, cols;
    int matrix[20][20];

    // Get the number of rows and columns from the user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Call the function to accept matrix elements
    acceptMatrix(rows, cols, matrix);

    // Call the function to display the matrix
    displayMatrix(rows, cols, matrix);

    // Call the function to print the sum of elements in each row and column
    printSum(rows, cols, matrix);
}
