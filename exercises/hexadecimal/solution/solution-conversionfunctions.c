#include <stdio.h>
#include <stdlib.h>

int main() {
    char number[30];
    char* endPtr;
    long bigNumber;
    int base;

    /* Input string representation of number from user */
    printf("Enter any number: ");
    fgets(number, 30, stdin);

    /* Input base */
    printf("Enter base: ");
    scanf("%d", &base);

    /* Convert string representation of number to long */
    bigNumber = strtol(number, &endPtr, base);

    /* endPtr points to NULL for failed conversions */
    if (*endPtr)
        printf("Unable to convert '%s' to base %d.\n", number, base);
    else
        printf("Converted long = %ld\n", bigNumber);

    return 0;
}
