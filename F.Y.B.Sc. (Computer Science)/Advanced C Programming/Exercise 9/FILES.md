# Working with Files in C

In C programming, working with files involves several fundamental concepts and functions. This guide will cover the following topics:

1. **Concept of Streams**
2. **Declaring a File Pointer**
3. **Opening and Closing a File**
4. **Reading and Writing to a Text File**
5. **Command Line Arguments**

## 1. Concept of Streams

In C, a stream is a sequence of data that can be read from or written to. Streams are used to handle input and output operations on files. There are two main types of streams:

- **Input Stream**: Used for reading data from a source, such as a file or the keyboard. The `stdin` stream is a commonly used input stream.

- **Output Stream**: Used for writing data to a destination, such as a file or the console. The `stdout` and `stderr` streams are commonly used output streams.

## 2. Declaring a File Pointer

To work with files, you need to declare a file pointer. A file pointer is a variable that stores the address of the file being accessed. You can declare a file pointer like this:

```c
FILE *file_pointer;
```

## 3. Opening and Closing a File

To open a file for reading or writing, you can use the `fopen` function. Here's an example of opening a file for reading:

```c
FILE *file_pointer;
file_pointer = fopen("example.txt", "r");
```

To close a file when you're done, use the `fclose` function:

```c
fclose(file_pointer);
```

## 4. Reading and Writing to a Text File

### Reading from a Text File

To read data from a file, you can use functions like `fscanf` or `fgets`. For example:

```c
char buffer[100];
fscanf(file_pointer, "%s", buffer); // Reads a word from the file
```

### Writing to a Text File

To write data to a file, you can use functions like `fprintf` or `fputs`. For example:

```c
fprintf(file_pointer, "This is a line of text.\n");
```

After reading or writing operations, it's essential to check for errors using functions like `feof` and handle them appropriately.

## 5. Command Line Arguments

Command line arguments allow you to pass arguments to a C program when it's executed from the command line. You can access these arguments through the `main` function's parameters:

```c
int main(int argc, char *argv[])
```

- `argc` (argument count) stores the number of arguments passed.

- `argv` (argument vector) is an array of strings containing the actual arguments.

You can access individual command line arguments using array indexing, like `argv[0]` for the program's name and `argv[1]`, `argv[2]`, etc., for additional arguments.

Here's a complete example that combines these concepts:

```c
#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    FILE *file_pointer;
    file_pointer = fopen(argv[1], "r");

    if (file_pointer == NULL) {
        printf("Unable to open the file.\n");
        return 1;
    }

    char buffer[100];
    while (fscanf(file_pointer, "%s", buffer) != EOF) {
        printf("%s\n", buffer);
    }

    fclose(file_pointer);

    return 0;
}
```

This program reads and displays the contents of a text file specified as a command line argument.