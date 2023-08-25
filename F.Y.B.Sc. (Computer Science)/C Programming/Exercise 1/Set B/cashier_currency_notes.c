// This program calculates and prints the total number of currency notes
// of each denomination that a cashier will have to give to a customer
// who withdraws a certain amount of money.
//
// The cashier has currency notes of denominations 1, 5 and 10.

#include <stdio.h>

int main() {
  // Initialize variables.
  int amount, notes1, notes5, notes10;

  // Get the amount to be withdrawn from the user.
  printf("Enter the amount to be withdrawn: ");
  scanf("%d", &amount);

  // Calculate the number of notes of each denomination.
  notes1 = amount / 1;
  amount = amount % 1;
  notes5 = amount / 5;
  amount = amount % 5;
  notes10 = amount / 10;

  // Print the number of notes of each denomination.
  printf("Number of 1-rupee notes: %d\n", notes1);
  printf("Number of 5-rupee notes: %d\n", notes5);
  printf("Number of 10-rupee notes: %d\n", notes10);

}
