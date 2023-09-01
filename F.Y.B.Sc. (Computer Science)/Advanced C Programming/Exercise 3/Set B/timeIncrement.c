
// This program defines a function to increment a given time by a specified number of seconds.

#include <stdio.h>

// Function to increment time by s seconds
void incrementTime(int *hours, int *minutes, int *seconds, int s)
{
    int totalSeconds = *hours * 3600 + *minutes * 60 + *seconds; // Convert current time to seconds
    totalSeconds += s;                                           // Increment by s seconds

    // Calculate new hours, minutes, and seconds
    *hours = (totalSeconds / 3600) % 24; // Ensure hours are in the range [0, 23]
    *minutes = (totalSeconds % 3600) / 60;
    *seconds = totalSeconds % 60;
}

int main()
{
    int hours, minutes, seconds, s;

    // Input time from the user
    printf("Enter the current time (hours minutes seconds): ");
    scanf("%d %d %d", &hours, &minutes, &seconds);

    // Input the number of seconds to increment
    printf("Enter the number of seconds to increment: ");
    scanf("%d", &s);

    // Call the function to increment the time
    incrementTime(&hours, &minutes, &seconds, s);

    // Display the new time
    printf("New time: %02d:%02d:%02d\n", hours, minutes, seconds);
}
