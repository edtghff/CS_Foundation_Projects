#include <stdio.h>

int main() {
    FILE *file;
    char text[100];

    // Write to a file
    file = fopen("example.txt", "w");
    fprintf(file, "Hello, World!\n");
    fclose(file);

    // Read from a file
    file = fopen("example.txt", "r");
    fgets(text, sizeof(text), file);
    printf("Read from file: %s", text);
    fclose(file);

    return 0;
}
