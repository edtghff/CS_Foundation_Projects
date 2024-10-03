#include <stdio.h>

void write_to_file(const char *filename) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        perror("Error opening file for writing");
        return;
    }

    fprintf(file, "Hello, File I/O in C!\n");
    fclose(file);
}

void read_from_file(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file for reading");
        return;
    }

    char buffer[100];
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }
    fclose(file);
}

int main() {
    const char *filename = "example.txt";

    // Write to file
    write_to_file(filename);
    // Read from file
    read_from_file(filename);

    return 0;
}
