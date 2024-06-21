# Activity: Convert numbers between different bases 

## Introduction

Number system conversion is essential when working with different bases. In this activity, we'll focus on converting decimal numbers to hexadecimal (and vice versa). Here are the basics:

1. Decimal (Base 10):
    - The decimal system uses digits 0 to 9.
    - Each digit’s position represents a power of 10.
    -  For example, the decimal number 123 is represented as (1 * 10^2^) + (2 * 10^1^) + (3 * 10^0^).
2. Hexadecimal (Base 16):
    - The hexadecimal system uses digits 0 to 9 and letters A to F (or a to f) to represent values from 0 to 15.
    - Each digit's position represents a power of 16.
    - For example, the hexadecimal number 1A3 is represented as (1 * 16^2^) + (10 * 16^1^) + (3 * 16^0^).
  
  **Activity**
  Let's write a C program that converts decimal numbers to hexadecimal and vice versa. We'll define functions for these conversions. In the main function, we'll display a menu where the user can choose the conversion type. Depending on their choice, we'll take input and perform the conversion.

```c
#include <stdio.h>
#include <stdlib.h>

// Function to convert decimal to hexadecimal
void decimalToHexadecimal(int decimal) {
    char hexadecimal[10];
    int i = 0;

    while (decimal > 0) {
        int remainder = decimal % 16;
        if (remainder < 10)
            hexadecimal[i++] = '0' + remainder;
        else
            hexadecimal[i++] = 'A' + remainder - 10;
        decimal /= 16;
    }

    printf("Hexadecimal: ");
    for (int j = i - 1; j >= 0; j--)
        printf("%c", hexadecimal[j]);
    printf("\n");
}

// Function to convert hexadecimal to decimal
int hexadecimalToDecimal(char* hexadecimal) {
    int decimal = 0;
    int length = strlen(hexadecimal);

    for (int i = 0; i < length; i++) {
        int digit = hexadecimal[i];
        if (digit >= '0' && digit <= '9')
            decimal = decimal * 16 + (digit - '0');
        else if (digit >= 'A' && digit <= 'F')
            decimal = decimal * 16 + (digit - 'A' + 10);
    }

    return decimal;
}

int main() {
    int choice, decimal;
    char hex[10];

    printf("Choose an option:\n");
    printf("1. Decimal to Hexadecimal\n");
    printf("2. Hexadecimal to Decimal\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter a decimal number: ");
            scanf("%d", &decimal);
            decimalToHexadecimal(decimal);
            break;
        case 2:
            printf("Enter a hexadecimal number: ");
            scanf("%s", hex);
            printf("Decimal: %d\n", hexadecimalToDecimal(hex));
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
```
**Explanation**
1. Function Definition
    - `decimalToHexadecimal(int decimal)`: This function takes an integer (decimal) as input and converts it to a hexadecimal string. It uses a loop to repeatedly divide the decimal number by 16 (the base of the hexadecimal system) and calculates the remainder. If the remainder is less than 10, it adds the corresponding digit ('0' to '9') to the hexadecimal string. Otherwise, it adds the appropriate letter ('A' to 'F') for values 10 to 15.
  
    - `hexadecimalToDecimal(char* hexadecimal)`: This function takes a hexadecimal string as input and converts it to an integer (decimal). It iterates through each character in the string, converting it to its decimal value. If the character is a digit ('0' to '9'), it subtracts '0' to get the actual value. If the character is a letter ('A' to 'F'), it calculates the value as 10 plus the difference between the character and 'A'.
2. Main Function
    - The `main()` function is the entry point of the program.
    - It declares variables: `choice` (for menu selection), `decimal` (for decimal input), and `hex` (for hexadecimal input).
    - Displays a menu with two options: decimal to hexadecimal conversion and hexadecimal to decimal conversion.
    - Reads the user's choice.
    - Based on the choice, it either:
      - Asks the user to input a decimal number, calls `decimalToHexadecimal()`, and prints the result.
      - Asks the user to input a hexadecimal number, calls `hexadecimalToDecimal()`, and prints the result.
      - Displays an error message for an invalid choice.
  3. Conversion logic
        - The conversion logic is implemented in the `decimalToHexadecimal()` and `hexadecimalToDecimal()` functions. 
        - The printf statements display the results.
  
**Conclusion**
Understanding number system conversions is crucial for low-level programming and working with hardware.
