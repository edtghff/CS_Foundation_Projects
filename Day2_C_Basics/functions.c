#include <stdio.h>

// Function to add two numbers
int add(int a, int b) {
    return a + b;
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    int sum = add(x, y);
    printf("The sum of %d and %d is %d.\n", x, y, sum);

    return 0;
}
