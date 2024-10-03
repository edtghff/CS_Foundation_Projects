#include <stdio.h>

// Function to demonstrate bitwise operations
void bitwise_operations() {
    unsigned int a = 5;  // Binary: 0101
    unsigned int b = 3;  // Binary: 0011

    printf("a = %u, b = %u\n", a, b);
    printf("a & b = %u\n", a & b);  // Bitwise AND
    printf("a | b = %u\n", a | b);  // Bitwise OR
    printf("a ^ b = %u\n", a ^ b);  // Bitwise XOR
    printf("~a = %u\n", ~a);        // Bitwise NOT
    printf("a << 1 = %u\n", a << 1); // Left shift
    printf("a >> 1 = %u\n", a >> 1); // Right shift
}

int main() {
    bitwise_operations();
    return 0;
}
