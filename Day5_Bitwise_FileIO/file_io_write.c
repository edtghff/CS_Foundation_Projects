#include <stdio.h>

void write_to_file(const char *filename) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        perror("Error opening file for writing");
        return;
    }

    fprintf(file, "Writing data to file.\n");
    fclose(file);
}

int main() {
    const char *filename = "output.txt";
    write_to_file(filename);
    return 0;
}
