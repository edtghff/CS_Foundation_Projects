#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    arr = (int*)malloc(n * sizeof(int)); // allocate memory

    if (arr = NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    printf("Allocated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
    }
    printf("\n");

    free (arr); // free allocated memory
    return 0;
}