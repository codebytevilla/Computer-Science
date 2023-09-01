#include <stdio.h>

// Function to convert decimal to binary
void decimalToBinary(int decimal)
{
    int binary[32];
    int i = 0;
    int j;

    while (decimal > 0)
    {
        binary[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }

    printf("Binary representation: ");
    for (j = i - 1; j >= 0; j--)
    {
        printf("%d", binary[j]);
    }
    printf("\n");
}

// Function to convert decimal to octal
void decimalToOctal(int decimal)
{
    int octal[32];
    int i = 0;
    int j;

    while (decimal > 0)
    {
        octal[i] = decimal % 8;
        decimal = decimal / 8;
        i++;
    }

    printf("Octal representation: ");
    for (j = i - 1; j >= 0; j--)
    {
        printf("%d", octal[j]);
    }
    printf("\n");
}

// Function to convert decimal to hexadecimal
void decimalToHexadecimal(int decimal)
{
    char hexadecimal[32];
    int remainder;
    int i = 0;
    int j;

    while (decimal > 0)
    {
        remainder = decimal % 16;
        if (remainder < 10)
        {
            hexadecimal[i] = remainder + '0';
        }
        else
        {
            hexadecimal[i] = remainder + 'A' - 10;
        }
        decimal = decimal / 16;
        i++;
    }

    printf("Hexadecimal representation: ");
    for (j = i - 1; j >= 0; j--)
    {
        printf("%c", hexadecimal[j]);
    }
    printf("\n");
}

int main()
{
    int decimal;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    decimalToBinary(decimal);
    decimalToOctal(decimal);
    decimalToHexadecimal(decimal);
}
