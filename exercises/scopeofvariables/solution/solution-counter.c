#include <stdio.h>

// Define the increment_count() function
void increment_count() {
    // Access the global variable count from externmain.c
    extern int count;
    count++;
}