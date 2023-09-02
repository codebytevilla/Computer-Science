#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to reverse a string
void reverseString(char str[]) {
    int length = strlen(str);
    int start = 0;
    int end = length - 1;
    char temp;

    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str1[100], str2[100];
    char str3[200];  // Create a larger buffer to store str1 + reversed str2
    int cmp;
    int i;

    // Accept input for str1 and str2
    printf("Enter the first string (str1): ");
    scanf("%s", str1);
    printf("Enter the second string (str2): ");
    scanf("%s", str2);

    // Compare str1 and str2
    cmp = strcmp(str1, str2);

    if (cmp == 0) {  // If str1 is equal to str2
        // Display the length of str1 and str2
        printf("Length of str1: %lu\n", strlen(str1));
        printf("Length of str2: %lu\n", strlen(str2));
    } else if (cmp < 0) {  // If str1 < str2
        // Concatenate str1 and the reversed str2 into str3
        strcpy(str3, str1);
        strcat(str3, " ");
        reverseString(str2);  // Reverse str2
        strcat(str3, str2);

        // Display str3
        printf("Concatenated string (str1 + reversed str2): %s\n", str3);
    } else {  // If str1 > str2
        // Convert str1 to uppercase
        for (i = 0; str1[i]; i++) {
            str1[i] = toupper(str1[i]);
        }

        // Convert str2 to lowercase
        for (i = 0; str2[i]; i++) {
            str2[i] = tolower(str2[i]);
        }

        // Display the modified str1 and str2
        printf("Uppercase str1: %s\n", str1);
        printf("Lowercase str2: %s\n", str2);
    }

    return 0;
}
