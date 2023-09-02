# C Arrays and Functions

## 1. What are arrays and how to declare an array?

An array in C is a collection of elements of the same data type, stored in contiguous memory locations. It allows you to store and access multiple values of the same type using a single identifier. To declare an array, you specify its data type, followed by the array name and the number of elements it can hold (known as the array size) enclosed in square brackets [].

Here's the syntax for declaring an array:

```c
data_type array_name[array_size];
```

For example, to declare an integer array that can hold 5 elements:

```c
int myArray[5];
```

## 2. How to enter data into an array and access the elements of an array?

You can enter data into an array by assigning values to its individual elements using the array index (starting from 0). To access the elements, you also use the array index.

Example of entering data and accessing elements:

```c
int myArray[5]; // Declare an integer array with 5 elements

// Enter data into the array
myArray[0] = 10;
myArray[1] = 20;
myArray[2] = 30;
myArray[3] = 40;
myArray[4] = 50;

// Access and print elements
printf("Element at index 0: %d\n", myArray[0]);
printf("Element at index 2: %d\n", myArray[2]);
```

## 3. How to initialize an array and how to check the bounds of an array?

You can initialize an array at the time of declaration or afterward using curly braces {}. To initialize an array during declaration, you provide a comma-separated list of values enclosed in curly braces. To check the bounds of an array, you can use conditional statements to ensure that you access elements within the valid index range (0 to array_size-1).

Example of array initialization and bounds checking:

```c
int myArray[5] = {10, 20, 30, 40, 50}; // Initializing the array

// Checking bounds before accessing elements
int index = 3;

if (index >= 0 && index < 5) {
   printf("Element at index %d: %d\n", index, myArray[index]);
} else {
   printf("Index out of bounds!\n");
}
```

## 4. How to pass an array to a function?

To pass an array to a function in C, you can pass it as an argument to the function. When you pass an array to a function, you're actually passing a pointer to the first element of the array.

Here's how you can do it:

```c
// Function to calculate the sum of elements in an array
int calculateSum(int arr[], int size) {
   int sum = 0;
   for (int i = 0; i < size; i++) {
       sum += arr[i];
   }
   return sum;
}

int main() {
   int myArray[5] = {10, 20, 30, 40, 50};
   int result = calculateSum(myArray, 5); // Pass the array and its size to the function
   printf("Sum of elements in the array: %d\n", result);
   return 0;
}
```

In this example, the `calculateSum` function takes an integer array `arr` and its size as arguments, and it calculates the sum of the elements in the array.