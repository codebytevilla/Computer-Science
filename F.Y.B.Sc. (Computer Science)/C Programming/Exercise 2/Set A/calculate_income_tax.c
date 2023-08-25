/*
 * This program calculates and displays the income tax of an employee
 * as per the following rules:
 *
 * Basic: < 1,50,000 Tax = 0
 * 1,50,000 to 3,00,000 Tax = 20%
 * > 3,00,000 Tax = 30%
 */

#include <stdio.h>

int main() {
  int basic_salary;
  float tax;

  printf("Enter the annual basic salary of the employee: ");
  scanf("%d", &basic_salary);

  if (basic_salary < 150000) {
    tax = 0;
  } else if (basic_salary <= 300000) {
    tax = basic_salary * 0.20;
  } else {
    tax = basic_salary * 0.30;
  }

  printf("The income tax of the employee is Rs. %.2f\n", tax);

}
