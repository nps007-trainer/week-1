#include <stdio.h>
#include "solution-calculator.h"

int main() {
    int x = 10, y = 5;
    int result_add, result_sub, result_mul;
    float result_div;

    // Using functions from calculator module
    result_add = add(x, y);
    result_sub = subtract(x, y);
    result_mul = multiply(x, y);
    result_div = divide(x, y);

    // Display results
    printf("Addition: %d\n", result_add);
    printf("Subtraction: %d\n", result_sub);
    printf("Multiplication: %d\n", result_mul);
    printf("Division: %.2f\n", result_div);

    return 0;
}
