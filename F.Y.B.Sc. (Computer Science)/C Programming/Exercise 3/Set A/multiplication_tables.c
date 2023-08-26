/*
 * This program displays multiplication tables from _ to _ having n multiples each.
 * The output is displayed in a tabular format.
 *
 * For example, the multiplication tables of 2 to 9 having 10 multiples each is shown below.
 *
 * 2 x 1 = 2 3 x 1 = 3 .... 9 x 1 = 9
 * 2 x 2 = 4 3 x 2 = 6 .... 9 x 2 = 18
 * ...
 * 2 x 10 = 20 3 x 10 = 30 .... 9 x 10 = 90
 */

#include <stdio.h>

int main() {
  // Get the start and end numbers from the user.
  int start, end, n;
  int i, j;

  printf("Enter the start number: ");
  scanf("%d", &start);
  printf("Enter the end number: ");
  scanf("%d", &end);
  printf("Enter the number of multiples: ");
  scanf("%d", &n);

  // Print the multiplication tables.
  for (i = start; i <= end; i++) {
    for (j = 1; j <= n; j++) {
      printf("%d x %d = %d\n", i, j, i * j);
    }
    printf("\n");
  }
}
