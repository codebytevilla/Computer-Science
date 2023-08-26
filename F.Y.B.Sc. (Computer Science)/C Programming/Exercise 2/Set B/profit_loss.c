/*
 * This program calculates the profit or loss made by a seller.
 * The cost price and selling price are input from the keyboard.
 */

#include <stdio.h>

int main() {
  int cost_price, selling_price;
  int profit, loss;

  // Get the cost price and selling price from the user.
  printf("Enter the cost price: ");
  scanf("%d", &cost_price);
  printf("Enter the selling price: ");
  scanf("%d", &selling_price);

  // Calculate the profit or loss.
  if (selling_price > cost_price) {
    profit = selling_price - cost_price;
    printf("The seller made a profit of $%d.\n", profit);
  } else if (selling_price < cost_price) {
    loss = cost_price - selling_price;
    printf("The seller made a loss of $%d.\n", loss);
  } else {
    printf("The seller made neither a profit nor a loss.\n");
  }
}
