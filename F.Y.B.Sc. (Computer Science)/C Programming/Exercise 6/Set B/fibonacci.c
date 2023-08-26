// This program calculates the nth Fibonacci number using recursion.
// The recursive definition of the nth Fibonacci number is as follows:
// fib(n) = 1 if n = 1 or 2
// = fib(n-2) + fib(n-1) if n>2

#include <stdio.h>

int fib(int n) {
  if (n == 0 || n == 1) {
    return 1;
  } else {
    return fib(n - 2) + fib(n - 1);
  }
}

int main() {
  int n;
  printf("Enter the number of Fibonacci numbers to display: ");
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    printf("%d ", fib(i));
  }

  printf("\n");
}

