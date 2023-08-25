// This program accepts x and y coordinates of two points and performs
// the following operations till the user selects Exit:
//   - Distance between points
//   - Slope of line between the points
//   - Check whether they lie in the same quadrant

#include <stdio.h>

int main()
{
    int x1, x2, y1, y2;
    float distance, slope;
    int choice;

    // Get the x and y coordinates of two points from the user
    printf("Enter the x-coordinate of the first point: ");
    scanf("%d", &x1);
    printf("Enter the y-coordinate of the first point: ");
    scanf("%d", &y1);
    printf("Enter the x-coordinate of the second point: ");
    scanf("%d", &x2);
    printf("Enter the y-coordinate of the second point: ");
    scanf("%d", &y2);

    do
    {
        // Print the menu
        printf("\n\nSelect an operation:");
        printf("\n 1. Distance between points");
        printf("\n 2. Slope of line between the points");
        printf("\n 3. Check whether they lie in the same quadrant");
        printf("\n 4. Exit");
        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);

        // Perform the operation as selected by the user
        switch (choice)
        {
        case 1:
            distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
            printf("\n\nThe distance between the two points is %.2f units\n\n", distance);
            break;
        case 2:
            slope = (y2 - y1) / (x2 - x1);
            printf("\n\nThe slope of the line passing through the two points is %.2f\n\n", slope);
            break;
        case 3:
            if ((x1 >= 0 && y1 >= 0) || (x1 < 0 && y1 < 0))
            {
                printf("\n\nThe two points lie in the same quadrant\n\n");
            }
            else
            {
                printf("\n\nThe two points do not lie in the same quadrant\n\n");
            }
            break;
        case 4:
            printf("\n\nExiting...\n\n");
            break;
        default:
            printf("\n\nInvalid choice!\n\n");
            break;
        }
    } while (choice != 4);
}
