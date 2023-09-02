# Recursion in C

Recursion in C is a programming technique where a function calls itself in order to solve a problem. It is often used in situations where a problem can be broken down into smaller, similar subproblems. Here's a breakdown of how recursion is typically used in C:

## 1. Recursive Definition

Recursion is often defined using two parts:
- **Base Case**: This is the termination condition that specifies when the recursion should stop. It's a condition that, when met, prevents further recursive calls and allows the function to return a result. Without a base case, the recursion would continue indefinitely.
- **Recursive Case**: This is where the function calls itself with modified arguments to solve a smaller or simpler subproblem. The goal is to move towards the base case.

Here's an example of a recursive definition for calculating the factorial of a number:

```c
int factorial(int n) {
    // Base case
    if (n <= 1) {
        return 1;
    }
    // Recursive case
    else {
        return n * factorial(n - 1);
    }
}
```

## 2. Declaring and Defining a Function

To use recursion in C, you first need to declare and define a function. The function should have the same return type and parameter types in both the declaration and definition. In the example above, the `factorial` function is declared and defined with an integer parameter `n` and an integer return type.

## 3. How to Call a Function

To call a recursive function, you simply use its name followed by parentheses and provide the required arguments. For example:

```c
int result = factorial(5);
```

This will call the `factorial` function with an argument of 5 and store the result in the `result` variable.

## 4. How to Pass Parameters to a Function

In C, parameters are passed by value by default, which means that the function receives a copy of the argument's value. When using recursion, you pass parameters like any other function. In the `factorial` example, each recursive call reduces the value of `n` by 1, effectively passing a smaller value to the next recursive call.

It's important to note that in C, changes to parameters within a recursive call do not affect the original caller's values because of the pass-by-value mechanism. If you need to maintain state across recursive calls, you may use global variables or pass additional parameters as needed.

Recursion can be a powerful tool for solving problems that have a natural recursive structure, but it should be used with caution to avoid stack overflow errors and ensure that the base case is properly defined to terminate the recursion.