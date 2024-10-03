#include <stdio.h>

void swap_using_xor(int *x, int *y) {
    printf("Before swap: x = %d, y = %d\n", *x, *y);
    
    *x = *x ^ *y; // Step 1
    *y = *x ^ *y; // Step 2
    *x = *x ^ *y; // Step 3
    
    printf("After swap: x = %d, y = %d\n", *x, *y);
}

int main() {
    int a = 5, b = 10;
    swap_using_xor(&a, &b);
    return 0;
}
