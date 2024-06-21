#include <stdio.h>

// Function to convert decimal to binary and print the results
void decimal_to_binary(int decimal) {
    // Temporary storage for binary representation
    int binary[32];
    int i = 0;

    // Handle negative numbers
    if (decimal < 0) {
        printf("Decimal: %d\n", decimal);
        printf("Binary: (not supported for negative numbers in this example)\n");
        return;
    }

    // Convert decimal to binary
    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }

    // Print decimal value
    printf("Decimal: %d\n", decimal);
    
    // Print binary value in reverse order
    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

int main() {
    int decimal;

    // Input from user
    printf("Enter a decimal integer: ");
    scanf("%d", &decimal);

    // Call function to convert and print
    decimal_to_binary(decimal);

    return 0;
}
