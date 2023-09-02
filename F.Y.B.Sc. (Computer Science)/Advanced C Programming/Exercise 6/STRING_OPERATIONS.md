# String Operations in C

In C programming, string operations can be performed using pointers and various string handling functions from the standard library. Here's a brief overview of each aspect:

## 1. Declare and Initialize Strings

Strings in C are represented as character arrays. You can declare and initialize strings as follows:

```c
char str1[] = "Hello, World"; // Static allocation
char str2[20];                // Declare an empty string of size 20
strcpy(str2, "Goodbye");      // Initialize str2 using strcpy
```

## 2. String Handling Functions

C provides a set of functions for working with strings in the `string.h` library. Here are some commonly used functions:

- `strlen`: Calculates the length of a string.
- `strcpy`: Copies one string to another.
- `strcat`: Concatenates two strings.
- `strcmp`: Compares two strings.
- `strchr`: Finds the first occurrence of a character in a string.
- `strstr`: Finds the first occurrence of a substring in a string.

Example usage:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello, ";
    char str2[] = "World";
    char result[50];

    strcpy(result, str1);    // Copy str1 to result
    strcat(result, str2);    // Concatenate str2 to result

    printf("Result: %s\n", result);

    if (strcmp(str1, str2) == 0) {
        printf("Strings are equal\n");
    } else {
        printf("Strings are not equal\n");
    }

    return 0;
}
```

## 3. Creating and Accessing an Array of Strings

You can create an array of strings by declaring a two-dimensional character array. Each element of the array is a string, and you can access them using array indexing.

```c
char names[3][20];  // Create an array of 3 strings, each with a maximum length of 20 characters

strcpy(names[0], "Alice");
strcpy(names[1], "Bob");
strcpy(names[2], "Charlie");

printf("Name 1: %s\n", names[0]);
printf("Name 2: %s\n", names[1]);
printf("Name 3: %s\n", names[2]);
```

## 4. Dynamic Memory Allocation

You can dynamically allocate memory for strings using functions like `malloc` and `free` from the `stdlib.h` library. This is useful when you need to work with strings of varying lengths.

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *dynamicStr;

    dynamicStr = (char *)malloc(20 * sizeof(char)); // Allocate memory for a string of up to 20 characters

    if (dynamicStr == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    strcpy(dynamicStr, "Dynamic String");

    printf("Dynamic String: %s\n", dynamicStr);

    free(dynamicStr); // Free the dynamically allocated memory

    return 0;
}
```

Remember to free dynamically allocated memory to prevent memory leaks.

These are some fundamental concepts and operations related to strings in C. Depending on your specific requirements, you may need to use additional functions and techniques for more advanced string manipulation.