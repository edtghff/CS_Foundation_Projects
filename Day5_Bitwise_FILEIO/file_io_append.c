#include <stdio.h>

void append_to_file(const char *filename) {
    FILE *file = fopen(filename, "a");
    if (file == NULL) {
        perror("Error opening file for appending");
        return;
    }

    fprintf(file, "Appending more data to the file.\n");
    fclose(file);
}

int main() {
    const char *filename = "output.txt";
    append_to_file(filename);
    return 0;
}
