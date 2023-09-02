## Using User-Defined Functions in C

### 1. Declaring and Defining a Function

To declare a function in C, you need to specify its name, return type, and parameters (if any). Here's a basic example:

```c
// Function declaration
int add(int a, int b);

// Function definition
int add(int a, int b) {
    return a + b;
}
```

In this example, we declare a function `add` that takes two integers as parameters and returns an integer. We then define the function by providing its implementation.

### 2. Function Call

To use a user-defined function, you call it in your program. Here's how you would call the `add` function:

```c
int result = add(5, 3);
```

In this example, we call the `add` function with arguments `5` and `3` and store the result in the `result` variable.

### 3. Passing Parameters to a Function

Functions can take parameters, which are values passed to the function when it is called. These parameters are used within the function's body. Here's an example with a function that calculates the square of a number:

```c
// Function declaration
int square(int x);

// Function definition
int square(int x) {
    return x * x;
}

// Function call
int result = square(4);
```

In this case, the `square` function takes an integer `x` as a parameter and returns its square.

### 4. Function Returning a Value

Functions can also return values using the `return` statement. The return type specified in the function declaration determines the type of value returned. Here's an example:

```c
// Function declaration
double divide(double a, double b);

// Function definition
double divide(double a, double b) {
    if (b == 0.0) {
        printf("Error: Division by zero\n");
        return 0.0; // Returning 0.0 in case of division by zero
    }
    return a / b;
}

// Function call
double result = divide(10.0, 2.0);
```

In this example, the `divide` function takes two double-precision floating-point numbers `a` and `b` as parameters and returns the result of dividing `a` by `b`. It also handles the case of division by zero by returning `0.0`.

These are the fundamental concepts for using user-defined functions in C. Functions help in modularizing code, making it more readable, and promoting code reusability.