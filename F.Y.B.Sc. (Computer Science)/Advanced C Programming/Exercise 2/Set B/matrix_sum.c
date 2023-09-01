#include <stdio.h>

void acceptMatrix(int matrix[100][100], int m, int n)
{
    int i, j;

    // Input matrix elements
    printf("Enter the matrix elements:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void displayMatrix(int matrix[100][100], int m, int n)
{
    int i, j;

    printf("Matrix:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

void performSum(int matrix[100][100], int m, int n)
{
    int sumMatrix[100][100]; // Assuming a maximum size for the result matrix
    int i, j;
    int rowSum, colSum;

    // Calculate the sums of rows and fill the result matrix
    for (i = 0; i < m; i++)
    {
        rowSum = 0;
        for (j = 0; j < n; j++)
        {
            rowSum += matrix[i][j];
            sumMatrix[i][j] = matrix[i][j];
        }
        sumMatrix[i][n] = rowSum; // Store the row sum in the last column
    }

    // Calculate the sums of columns and fill the last row of the result matrix
    for (j = 0; j < n; j++)
    {
        colSum = 0;
        for (int i = 0; i < m; i++)
        {
            colSum += matrix[i][j];
        }
        sumMatrix[m][j] = colSum; // Store the column sum in the last row
    }

    // Display the result matrix
    printf("The (m+1) x (n+1) matrix with row and column sums:\n");
    for (i = 0; i <= m; i++)
    {
        for (j = 0; j <= n; j++)
        {
            printf("%d\t", sumMatrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int m, n;
    int matrix[100][100];

    // Input matrix dimensions
    printf("Enter the number of rows (m): ");
    scanf("%d", &m);
    printf("Enter the number of columns (n): ");
    scanf("%d", &n);

    acceptMatrix(matrix, m, n);
    displayMatrix(matrix, m, n);
    performSum(matrix, m, n);
}
