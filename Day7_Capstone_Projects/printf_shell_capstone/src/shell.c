#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

#define MAX_INPUT 1024

void shell_loop() {
    char input[MAX_INPUT];
    char *args[64];
    int status;

    while (1) {
        printf("shell> ");
        fgets(input, MAX_INPUT, stdin);

        // Remove newline
        input[strcspn(input, "\n")] = 0;

        // Split input into arguments
        args[0] = strtok(input, " ");
        int i = 0;
        while (args[i] != NULL) {
            i++;
            args[i] = strtok(NULL, " ");
        }

        if (args[0] == NULL) {
            continue;  // Empty command
        }

        // Fork and exec
        pid_t pid = fork();
        if (pid == 0) {
            execvp(args[0], args);
            perror("exec failed");
            exit(EXIT_FAILURE);
        } else if (pid > 0) {
            wait(&status);
        } else {
            perror("fork failed");
        }
    }
}

int main() {
    shell_loop();
    return 0;
}
