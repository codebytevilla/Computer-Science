#include <stdio.h>

// Function to accept a matrix A of size mXn from the user
void acceptMatrix(int A[100][100], int m, int n)
{
    int i, j;

    printf("Enter elements of matrix A (%dx%d):\n", m, n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
}

// Function to calculate the transpose of matrix A and store it in matrix B
void transposeMatrix(int A[100][100], int B[100][100], int m, int n)
{
    int i, j;

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            B[j][i] = A[i][j];
        }
    }
}

// Function to display a matrix
void displayMatrix(int matrix[100][100], int m, int n)
{
    int i, j;

    printf("Matrix B (%dx%d, Transpose of A):\n", n, m);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int A[100][100], B[100][100];
    int m, n;

    printf("Enter the number of rows (m) and columns (n) for matrix A: ");
    scanf("%d%d", &m, &n);

    if (m <= 0 || n <= 0)
    {
        printf("Invalid matrix dimensions.\n");
        return 1;
    }

    if (m > 100 || n > 100)
    {
        printf("Matrix dimensions are too large. Please limit m and n to 100 or less.\n");
        return 1;
    }

    acceptMatrix(A, m, n);
    transposeMatrix(A, B, m, n);
    displayMatrix(B, n, m);
}
