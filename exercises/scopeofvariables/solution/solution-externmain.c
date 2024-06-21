
#include <stdio.h>


// Declare the increment_count() function
extern void increment_count();

// Global variable accessible only within externmain.c
static int count = 0;

int main() {
    printf("Initial value of count: %d\n", count);

    // Call the increment_count() function
    increment_count();

    printf("After incrementing count: %d\n", count);

    return 0;
}
