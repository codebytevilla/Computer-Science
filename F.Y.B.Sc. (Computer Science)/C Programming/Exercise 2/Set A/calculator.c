// This program accepts two integers and an operator as a character (+ - * /),
// performs the corresponding operation and displays the result.
// The switch case statement is used to select the appropriate operation.

#include <stdio.h>

int main() {
  // Declare variables.
  int a, b;
  char operator;

  // Get input from the user.
  printf("Enter two integers: ");
  scanf("%d %d", &a, &b);
  printf("Enter an operator (+, -, *, /): ");
  scanf(" %c", &operator);

  // Switch case statement to select the appropriate operation.
  switch (operator) {
    case '+':
      printf("%d + %d = %d\n", a, b, a + b);
      break;
    case '-':
      printf("%d - %d = %d\n", a, b, a - b);
      break;
    case '*':
      printf("%d * %d = %d\n", a, b, a * b);
      break;
    case '/':
      printf("%d / %d = %d\n", a, b, a / b);
      break;
    default:
      printf("Invalid operator.\n");
  }
}
