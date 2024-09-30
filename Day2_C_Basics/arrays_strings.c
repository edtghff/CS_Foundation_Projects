#include <stdio.h>
#include <string.h>

int main() {
    // Array of integers
    int numbers[5] = {10, 20, 30, 40, 50};
    printf("Array of numbers:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // String
    char name[50];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Hello, %s!\n", name);

    return 0;
}
