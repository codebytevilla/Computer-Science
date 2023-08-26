// This program calculates x^y using recursion.

#include <stdio.h>

int recursive_xy(int x, int y) {
  if (y == 0) {
    return 1;
  } else {
    return x * recursive_xy(x, y - 1);
  }
}

int main() {
  int x, y;

  printf("Enter x: ");
  scanf("%d", &x);

  printf("Enter y: ");
  scanf("%d", &y);

  int result = recursive_xy(x, y);

  printf("x^y = %d\n", result);

}
