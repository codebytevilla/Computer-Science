/*
 * This program provides a menu-driven interface for performing
 * the following operations:
 *
 * i) Power
 * ii) Square root
 * iii) Floor
 * iv) Ceiling
 * v) Exit
 *
 * The program uses the standard library functions from `math.h`.
 */

#include <stdio.h>
#include <math.h>

int main() {
  int choice;
  double x, y;

  do {
    printf("\n\nSelect an operation:\n");
    printf("1. Power\n");
    printf("2. Square root\n");
    printf("3. Floor\n");
    printf("4. Ceiling\n");
    printf("5. Exit\n");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
      case 1:
        printf("Enter two numbers: ");
        scanf("%lf %lf", &x, &y);
        printf("x^y = %lf\n", pow(x, y));
        break;
      case 2:
        printf("Enter a number: ");
        scanf("%lf", &x);
        printf("sqrt(x) = %lf\n", sqrt(x));
        break;
      case 3:
        printf("Enter a number: ");
        scanf("%lf", &x);
        printf("floor(x) = %lf\n", floor(x));
        break;
      case 4:
        printf("Enter a number: ");
        scanf("%lf", &x);
        printf("ceil(x) = %lf\n", ceil(x));
        break;
      case 5:
        printf("Exiting...\n");
        break;
      default:
        printf("Invalid choice!\n");
    }
  } while (choice != 5);

}
