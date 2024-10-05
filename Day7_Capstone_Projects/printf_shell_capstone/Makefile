CC = gcc
CFLAGS = -Wall -Wextra -Iinclude

# Targets for building the main project
all: shell test_printf

# For the shell program
shell: src/shell.c
	$(CC) $(CFLAGS) -o bin/shell src/shell.c src/utils.c

# For testing printf
test_printf: tests/test_printf.c
	$(CC) $(CFLAGS) -o bin/test_printf tests/test_printf.c src/printf.c src/utils.c

clean:
	rm -rf bin/*

# Targets for running tests
test_shell: tests/test_shell.c
	$(CC) $(CFLAGS) -o bin/test_shell tests/test_shell.c src/shell.c src/utils.c
