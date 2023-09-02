# Decision-Making Statements in C

In C programming, decision-making statements are used to control the flow of a program based on certain conditions. There are primarily two types of decision-making statements: `if` and `switch-case`. Let's explore each of them, including their syntax.

## `if` Statements:

The `if` statement allows you to execute a block of code if a specified condition is true. It can be used alone or in combination with `else` and `else if` to handle multiple conditions.

**Syntax:**

```c
if (condition) {
    // Code to execute if the condition is true
}
```

**Example:**

```c
int x = 10;
if (x > 5) {
    printf("x is greater than 5\n");
} else {
    printf("x is not greater than 5\n");
}
```

## `if-else` Statements:

The `if-else` statement allows you to specify an alternate block of code to execute if the condition in the `if` statement is false.

**Syntax:**

```c
if (condition) {
    // Code to execute if the condition is true
} else {
    // Code to execute if the condition is false
}
```

**Example:**

```c
int x = 3;
if (x > 5) {
    printf("x is greater than 5\n");
} else {
    printf("x is not greater than 5\n");
}
```

## Nested `if-else` Statements:

You can nest `if-else` statements inside each other to handle more complex conditions.

**Syntax:**

```c
if (condition1) {
    // Code to execute if condition1 is true
    if (condition2) {
        // Code to execute if both condition1 and condition2 are true
    } else {
        // Code to execute if condition1 is true but condition2 is false
    }
} else {
    // Code to execute if condition1 is false
}
```

## `switch-case` Statements:

The `switch-case` statement allows you to select one of many code blocks to be executed based on the value of a variable or an expression.

**Syntax:**

```c
switch (expression) {
    case value1:
        // Code to execute if expression equals value1
        break;
    case value2:
        // Code to execute if expression equals value2
        break;
    // Additional cases...
    default:
        // Code to execute if expression doesn't match any case
}
```

**Example:**

```c
int choice;
printf("Enter a number (1-3): ");
scanf("%d", &choice);

switch (choice) {
    case 1:
        printf("You chose option 1\n");
        break;
    case 2:
        printf("You chose option 2\n");
        break;
    case 3:
        printf("You chose option 3\n");
        break;
    default:
        printf("Invalid choice\n");
}
```

These are the fundamental decision-making statements in C, and they are essential for controlling the flow of your programs based on different conditions. You can use them individually or in combination to create more complex logic.