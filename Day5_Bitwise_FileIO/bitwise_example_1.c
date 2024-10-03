#include <stdio.h>

void bit_masking_example() {
    unsigned char flags = 0b00001111;  // Flags: 0000 1111
    unsigned char mask = 0b00000001;   // Mask: 0000 0001

    printf("Initial flags: %u\n", flags);
    
    // Check if the first bit is set
    if (flags & mask) {
        printf("The first bit is set.\n");
    } else {
        printf("The first bit is not set.\n");
    }

    // Set the first bit
    flags |= mask; // 0000 0001
    printf("After setting the first bit: %u\n", flags);
    
    // Clear the first bit
    flags &= ~mask; // 0000 0000
    printf("After clearing the first bit: %u\n", flags);
}

int main() {
    bit_masking_example();
    return 0;
}
