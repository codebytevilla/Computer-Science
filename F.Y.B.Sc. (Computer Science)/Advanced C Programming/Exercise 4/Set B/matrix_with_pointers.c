/* This program dynamically allocates memory for a matrix,
 * accepts its elements, and displays the matrix using pointers
 * with separate functions.
 */

#include <stdio.h>
#include <stdlib.h>

// Function to dynamically allocate memory for a matrix
int **createMatrix(int m, int n)
{
    int i;
    int **matrix = (int **)malloc(m * sizeof(int *));
    if (matrix == NULL)
    {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    for (i = 0; i < m; i++)
    {
        matrix[i] = (int *)malloc(n * sizeof(int));
        if (matrix[i] == NULL)
        {
            printf("Memory allocation failed!\n");
            exit(1);
        }
    }

    return matrix;
}

// Function to accept elements of the matrix
void acceptMatrix(int **matrix, int m, int n)
{
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to display the matrix using pointers
void displayMatrix(int **matrix, int m, int n)
{
    int i, j;

    printf("Matrix:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", *(*(matrix + i) + j));
        }
        printf("\n");
    }
}

int main()
{
    int m, n, i;
    int **matrix;

    // Get the number of rows and columns for the matrix
    printf("Enter the number of rows: ");
    scanf("%d", &m);
    printf("Enter the number of columns: ");
    scanf("%d", &n);

    // Create the matrix and accept elements
    matrix = createMatrix(m, n);
    acceptMatrix(matrix, m, n);

    // Display the matrix
    displayMatrix(matrix, m, n);

    // Free allocated memory
    for (i = 0; i < m; i++)
    {
        free(matrix[i]);
    }
    free(matrix);
}
