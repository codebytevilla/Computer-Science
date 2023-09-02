# Usage of 2-D Arrays and Functions in C

## 1. Declaring and Initializing a 2-D Array

You can declare and initialize a two-dimensional array in C as follows:

```c
// Syntax: data_type array_name[row_size][column_size];

int matrix[3][3]; // Declares a 3x3 integer array

// Initialize the array using nested loops
for (int i = 0; i < 3; i++) {
   for (int j = 0; j < 3; j++) {
       matrix[i][j] = 0; // Initialize all elements to 0
   }
}
```

You can also declare and initialize a 2-D array simultaneously:

```c
int matrix[3][3] = {
   {1, 2, 3},
   {4, 5, 6},
   {7, 8, 9}
};
```

## 2. Accessing Elements

You can access elements of a 2-D array using the row and column indices. Remember that array indices in C are zero-based.

```c
int element = matrix[1][2]; // Accessing the element at row 1, column 2 (which is 6 in this case)
```

## 3. Usage of Two-Dimensional Arrays

Two-dimensional arrays are commonly used in various applications, such as:

- **Matrices:** They are used for representing mathematical matrices in applications like linear algebra, graphics, and simulations.

- **Image Processing:** In image processing, each pixel's color value can be stored in a 2-D array, allowing manipulation and filtering of images.

- **Board Games:** Two-dimensional arrays can represent the game boards for games like chess, tic-tac-toe, or Sudoku.

- **Data Tables:** When dealing with tabular data, you can use 2-D arrays to organize and manipulate data.

- **Text Processing:** In applications involving text analysis or processing, you can use 2-D arrays to store and manipulate characters or strings.

- **Grid-Based Algorithms:** Algorithms like pathfinding (e.g., A* algorithm) or cellular automata (e.g., Conway's Game of Life) often use 2-D arrays to represent grids and perform calculations on them.

Here's an example of a simple matrix multiplication function using 2-D arrays:

```c
void matrixMultiply(int A[][3], int B[][3], int C[][3], int row1, int col1, int col2) {
   for (int i = 0; i < row1; i++) {
       for (int j = 0; j < col2; j++) {
           C[i][j] = 0;
           for (int k = 0; k < col1; k++) {
               C[i][j] += A[i][k] * B[k][j];
           }
       }
   }
}
```

This function takes two input matrices `A` and `B`, multiplies them, and stores the result in matrix `C`. You can use this function to perform matrix multiplication with 2-D arrays in C.

Two-dimensional arrays are versatile and can be applied in various programming scenarios where data needs to be organized in a grid-like structure.