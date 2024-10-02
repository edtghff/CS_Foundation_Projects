#include <stdio.h>
#include "variadic_functions.h"
#include "math_operations.h"

#define PI 3.14159
#define SQUARE(x) ((x) * (x))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define CIRCLE_AREA(radius) (PI * SQUARE(radius))

int main() {
    // Testing variadic function
    printf("Average of 10, 20, 30: %.2f\n", average(3, 10, 20, 30));

    // Testing math operations
    printf("Addition: 5 + 3 = %d\n", add(5, 3));
    printf("Subtraction: 5 - 3 = %d\n", subtract(5, 3));
    printf("Multiplication: 5 * 3 = %d\n", multiply(5, 3));
    printf("Division: 6 / 3 = %d\n", divide(6, 3));

    // Using macros
    printf("Max of 5 and 10: %d\n", MAX(5, 10));
    printf("Area of a circle with radius 3: %.2f\n", CIRCLE_AREA(3));

    return 0;
}
