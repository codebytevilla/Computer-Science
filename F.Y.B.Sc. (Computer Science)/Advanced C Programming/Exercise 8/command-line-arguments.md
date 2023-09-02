# Command Line Arguments and Preprocessor Directives in C

## Command Line Arguments in C

Command-line arguments are values provided to a C program when it is executed from the command line or terminal. These arguments allow you to pass data or configuration options to your program without modifying the source code. Command-line arguments are accessible through the `main` function's parameter list. 

In C, the `main` function typically has the following prototype:

```c
int main(int argc, char *argv[])
```

- `argc` (argument count): It represents the number of command-line arguments passed to the program, including the name of the program itself. It's an integer.
- `argv` (argument vector): It is an array of strings (`char*`), where each element is a pointer to a null-terminated string containing a command-line argument. `argv[0]` typically holds the name of the program, while the subsequent elements (`argv[1]`, `argv[2]`, and so on) hold the actual command-line arguments.

Here's an example of a simple program that prints the command-line arguments and their count:

```c
#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("Argument count: %d\n", argc);

    for (int i = 0; i < argc; i++) {
        printf("Argument %d: %s\n", i, argv[i]);
    }

    return 0;
}
```

When you run this program with `./program arg1 arg2 arg3`, it will display:

```
Argument count: 4
Argument 0: ./program
Argument 1: arg1
Argument 2: arg2
Argument 3: arg3
```

## Preprocessor Directives in C

Preprocessor directives are commands in C that start with a `#` symbol and are processed by the C preprocessor before the actual compilation of the program begins. They are used to instruct the preprocessor to perform certain tasks such as including header files, defining macros, and conditional compilation.

Here are some common preprocessor directives:

- `#include`: This directive is used to include the contents of header files into your program. For example, `#include <stdio.h>` includes the standard input/output library.

- `#define`: It is used to create macros, which are essentially symbolic constants or short functions that are replaced with their definitions during preprocessing.

- `#ifdef`, `#ifndef`, `#else`, `#elif`, and `#endif`: These directives are used for conditional compilation. They allow you to include or exclude parts of your code based on certain conditions.

- `#pragma`: This directive provides compiler-specific instructions. It is often used for optimization or other compiler-specific settings.

Preprocessor directives are processed before the actual code is compiled, and they do not result in machine code but rather affect how the code is compiled.