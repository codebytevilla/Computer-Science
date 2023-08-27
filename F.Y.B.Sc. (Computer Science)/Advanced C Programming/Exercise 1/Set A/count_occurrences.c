// This program defines a function to count the occurrences of a given key in an array of integers.


#include <stdio.h>

// Function to count occurrences of a key in an array
int countOccurrences(int arr[], int n, int key) {
    int i;
    int count = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    int key;
    int occurrences;
    int arr[100];

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the key to count: ");
    scanf("%d", &key);

    occurrences = countOccurrences(arr, n, key);
    printf("The key %d appears %d times in the array.\n", key, occurrences);

}
